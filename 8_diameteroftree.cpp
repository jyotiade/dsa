//=====================que.8 Diameter of tree====================
#include<iostream>
using namespace std;
class node
{
    public:int data;
    class node *l;
    class node *r;
    node(int d)
    {
        data=d;
        l=NULL;
        r=NULL;
    }
    int height(node *h)
    {
        if(h==NULL)
        {
        return 0;
        }
        int left=height(h->l);
        int right=height(h->r);
        int result=max(left,right)+1;
        return result;
    }
    int diameter(node *h)
    {
        if(h==NULL)
        {
            return 0;
        }
        int leftd=diameter(h->l);
        int rightd=diameter(h->r);
        int totald=height(h->l)+height(h->r)+1;
        int ans=max(rightd,max(leftd,totald));
        return ans;
    }
};
int main()
{
 node *root=new node(1);
 root->l=new node(20);
 root->r=new node(8);
 root->l->l=new node(11);
 root->l->r=new node(15);

 cout<<root->diameter(root);
}