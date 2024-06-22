//======que9: Balanced tree==================================
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
    int height(node *h)
    {
        if (h == NULL)
        {
            return 0;
        }
        int left = height(h->l);
        int right = height(h->r);
        int result = max(left, right) + 1;
        return result;
    }
    bool isbalance(node *h)
    {
        if (h == NULL)
        {
            return true;
        }
  bool left = isbalance(h->l);
        bool right = isbalance(h->r);
        bool diff = abs(height(h->l) - height(h->r)) <= 1;
        if (left && right && diff)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    };
    int main()
    {
        node *root = new node(2);
        root->l = new node(1);
        root->l->l = new node(9);
        root->l->r=new node(4);
        root->r=new node(6);
        bool r = root->isbalance(root);
        if (r)
        {
            cout << "balanced tree";
        }
        else
        {
            cout << " not balanced tree";}
            }