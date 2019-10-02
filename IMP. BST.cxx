//Implementation of BST.
#include<iostream>
#include<stack>
using namespace std;
struct bstnode{
    int data;
    bstnode *left;
    bstnode *right;
};

bstnode *root=NULL;//Pointer to root-node.

bstnode* getnewnode(int x)
{
    bstnode* p=new bstnode();
    p->data=x;
    p->left=NULL;
    p->right=NULL;
    return p;
}

bstnode *insertbst(bstnode *root,int data)
{
    if(root==NULL)
        root=getnewnode(data);

    else if(data<=root->data)
    {
        root->left=insertbst(root->left,data);
    }

    else{
        root->right=insertbst(root->right,data);
    }
    return root;

}

bool bstsearch(bstnode *root,int data)
{
    if(root==NULL)
        return false;

    else if(root->data==data)
    return true;
    else if(data<=root->data)
        bstsearch(root->left,data);
    else
        bstsearch(root->right,data);


}

void bstmax(bstnode *root)
{
    if(root==NULL)
        cout<<endl<<"Empty";
    else if(root->right==NULL)
        cout<<endl<<"Max element :"<<root->data<<endl;

    else
    {
        bstmax(root->right);
    }
    return;
}

void bstmin(bstnode *root)
{
    if(root==NULL)
        cout<<"Empty";

    else if(root->left==NULL)
        cout<<"Min :"<<root->data<<endl;

    else
        bstmin(root->left);
}

void inorder()
{
    bstnode *current=root;
    stack<bstnode*> s;
    s.push(current);

    while((current!=NULL)&&(!s.empty()))
          {
              if((current==NULL)&&(!s.empty()))
          {
              cout<<s.top()->data<<" ";
              current=s.top()->right;
              s.pop();
              if(current!=NULL) s.push(current->right);
          }
             else current=current->left;

          }
}

int main()
{
    root=insertbst(root,10);
    cout<<root;
    root=insertbst(root,20);
    root=insertbst(root,45);
    root=insertbst(root,78);root=insertbst(root,34);root=insertbst(root,765);
    insertbst(root,789);
    insertbst(root,7);
    cout<<endl<<root<<endl;
    (bstsearch(root,760))?cout<<"Found":cout<<"Not found";
    bstmax(root);
    bstmin(root);
    inorder();


}
