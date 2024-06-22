//=======que.7:Binary search tree=====================
#include <iostream>
using namespace std;
class node
{
 public:
    int data;
    class node *l;
    class node *r;
    node(int d)
    {
        data = d;
        l = NULL;
        r = NULL;
    }
};
node *bst(node *root,int v)
{

    if(root==NULL)
    {
        return new node(v);
    }
    if(v<root->data)
    {
        root->l=bst(root->l,v);
    }
    else{
        root->r=bst(root->r,v);
    }
    return root;
}
 
void inorder(node *root)
{
    if(root==NULL)
    return;
    inorder(root->l);
    cout<<root->data<<" ";
    inorder(root->r);
}
int main()
{
    node *root=NULL;
    root=bst(root,25);
    root=bst(root,13);
    root=bst(root,11);
    root=bst(root,20);
    root=bst(root,4);
    inorder(root);
}