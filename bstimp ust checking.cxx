//BST implementation
#include<iostream>
using namespace std;
struct nodeBST{
        int data;
        nodeBST *left;
        nodeBST *right;
};

nodeBST *root=NULL;

nodeBST* getNewNode(int x)
{
    nodeBST *newNode=new nodeBST;
    newNode->data=x;
    newNode->left=newNode->right=NULL;
}

nodeBST* insert(nodeBST *root, int x)
{
    if(root==NULL)
    {
        root=getNewNode(x);
        return root;
    }

    else if(root->data<x)
        root->right=insert(root->right,x);

    else root->left=insert(root->left,x);
}

int maxE(nodeBST *root)
{
    if(root->right==NULL)
    return root->data;

    else maxE(root->right);
}

int minE(nodeBST *root)
{
    if(root->left==NULL)
        return root->data;

    else minE(root->left);
}



int  iMin()
{
    nodeBST *temp=root;

while(temp->left!=NULL)
      temp=temp->left;

      return temp->data;
}

bool search(nodeBST *root, int x)
{
    if(root==NULL)
        return false;

    if(root->data==x) return true;

    else if(root->data<x) search(root->right,x);

    else search(root->left, x);

}

int findHeight(nodeBST* root)
{
    if(root==NULL)
        return -1;

    return (max(findHeight(root->left),findHeight(root->right))+1);
}


int main(){

    root=insert(root,9);
     root=insert(root,12);
     root=insert(root,24);
     root=insert(root,962);
     root=insert(root,4);
     root=insert(root,90);
     root=insert(root,6);

     cout<<"Max. element: "<<maxE(root);
     insert(root,976);
       cout<<endl<<"Max. element: "<<maxE(root);
     cout<<endl<<"Min. element: "<<minE(root);
     cout<<endl<<"MIN by iterative approach: "<<iMin();

     if(search(root,962))
     cout<<endl<<"Element is in the tree.";

     else cout<<endl<<"Element not found.";

     cout<<endl<<"Height of the tree :"<<findHeight(root);


return 0;
}
