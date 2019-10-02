//BST implementation
#include<iostream>
#include<queue>
#include<stack>
using namespace std;

struct nodeBst{
int data;
nodeBst* left;
nodeBst* right;
};

nodeBst* root=NULL;//Stores the add. of the root node.

nodeBst* getnewNode(int x)//To get new node.
{
    nodeBst* newNode=new nodeBst();
    newNode->data=x;
    newNode->left=NULL;
    newNode->right=NULL;

    return newNode;
}

nodeBst* insertNode(nodeBst* root,int x)//Insert a node
{
    if(root==NULL)
    {
        root=getnewNode(x);
        return root;
    }
    else if(x>root->data)
        root->right=insertNode(root->right,x);

    else  root->left=insertNode(root->left,x);
}

bool searchNode(nodeBst* root,int x)//To search a node.
{
    if(root==NULL)
        return false;

    else if(root->data==x) return true;

     else if(root->data<x)
            searchNode(root->right,x);

     else searchNode(root->left,x);
}

int findMin(nodeBst* root)//To find min element in BST using recursive approach
{
    if(root==NULL)
        return -1;
    else if(root->left==NULL)
        return root->data;

    else findMin(root->left);
}

int findMax()//Finding max element in BST using iterative approach.
{
 nodeBst* temp=root;

 if(root==NULL)
    return -1;

 while((*temp).right!=NULL)
     temp=(*temp).right;

 return (*temp).data;
}

int findHeight(nodeBst* root)//Height of a tree is the no. of edges in the longest path from root node to a leaf node.
{
    if(root==NULL)
        return -1;



    int rHeight=findHeight(root->right);
    int lHeight=findHeight(root->left);

    return max(rHeight,lHeight)+1;
}

void levelTraversal()//Level order traversal(BFS)
{
    if(root==NULL)
        cout<<"tree is empty!";

    queue<nodeBst* > Q;

    Q.push(root);

    while(!Q.empty())
    {
      cout<<" "<<Q.front()->data;

      if(Q.front()->left!=NULL)
      Q.push(Q.front()->left);

      if(Q.front()->right!=NULL)
      Q.push(Q.front()->right);
          Q.pop();

    }
}

    void preorder(nodeBst* root)
    {
        if (root==NULL) return;

        cout<<" "<<root->data;
        preorder(root->left);
        preorder(root->right);
    }

  void inorder(nodeBst* root)
  {
      if(root==NULL) return;

      inorder(root->left);
      cout<<" "<<root->data;
      inorder(root->right);
  }

  void postorder(nodeBst* root)
  {
      if(root==NULL) return;//Base condition, if omitted the function will go into infinite recursion.

      postorder(root->left);
      postorder(root->right);
      cout<<" "<<root->data;
  }

  void itInostorder()
  {
      nodeBst* current=root;
      stack<nodeBst*> s;

      cout<<"\nInorder traversal by iterative approach: ";
      while(true)
      {
          if(current!=NULL)
          {
              s.push(current);
              current=current->left;
          }

          else
          {
              if(s.empty()) break;
              auto a=s.top();
              s.pop();
              cout<<a->data<<" ";
              current=a->right;


          }
      }
  }

void itPostorder()
{
    cout<<"\n Postorder traversal using iterative approach.";
    nodeBst* temp=root;//Local to this function.

    stack<nodeBst*> s1,s2;
    s1.push(temp);

    while(!s1.empty())
    {
        auto a=s1.top();
        s1.pop();

        s2.push(a);

        if(a->left) s1.push(a->left);
        if(a->right) s1.push(a->right);

    }

    while(!s2.empty())
    {
        cout<<s2.top()->data<<" ";
        s2.pop();
    }
}

stack<nodeBst*> st1,st2;
void allPaths(nodeBst* root)
{
  if(root==NULL) return;

  st1.push(root);

  if(root->left==NULL && root->right==NULL)
  {
      while(!st1.empty())
      {
          st2.push(st1.top());
          st1.pop();
      }

      while(!st2.empty())
      {
          st1.push(st2.top());
          cout<<st2.top()->data<<" ";
          st2.pop();
      }

      cout<<"\n";
  }

  allPaths(root->left);
  allPaths(root->right);
  st1.pop();
}

int main()
{
 root=insertNode(root,6);
 root =insertNode(root,9);
 root=insertNode(root,5);
  root=insertNode(root,5);
  root=insertNode(root,15);
  root=insertNode(root,-5);


 if(searchNode(root,8)==true)
    cout<<"Value found!";

 else cout<<"Not present!";

 cout<<endl<<root->data;
 cout<<endl<<"Min element: "<<findMin(root);
 cout<<endl<<root->data;
  cout<<endl<<"Man element: "<<findMax();
  cout<<endl<<root->data;
  cout<<endl<<"Height of the tree "<<findHeight(root);
  cout<<endl<<root->data;
  cout<<endl<<"Level order traversal: ";
  levelTraversal();

   cout<<endl<<"Pre order traversal:   ";
  preorder(root);

  cout<<endl<<root->data;

  cout<<endl<<"Inorder traversal:   ";
  inorder(root);

   cout<<endl<<"postorder traversal:   ";
  postorder(root);
  cout<<"\n";
  itInostorder();
  itPostorder();
  cout<<"\n All paths are: \n ";
  allPaths(root);

 return 0;
}
