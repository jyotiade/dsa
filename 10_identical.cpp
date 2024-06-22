// ==============que10: two trees are identical==============

#include<iostream>
using namespace std;

class node {
public:
	int value;
	node* left;
	node* right;
};


node* newNode(int value)
{
	node* Node = new node();
	Node->value= value;
	Node->left = NULL;
	Node->right = NULL;

	return (Node);
}


int identicalTrees(node* a, node* b)
{
	
	if (a == NULL && b == NULL)
		return 1;

	
	if (a != NULL && b != NULL) {
		return (a->value == b->value
				&& identicalTrees(a->left, b->left)
				&& identicalTrees(a->right, b->right));
	}

	
	return 0;
}


int main()
{
	node* root1 = newNode(1);
	node* root2 = newNode(1);

	root1->left = newNode(2);
	root1->right = newNode(6);
	root1->left->left = newNode(4);
	root1->left->right = newNode(5);

	root2->left = newNode(2);
	root2->right = newNode(3);
	root2->left->left = newNode(4);
	root2->left->right = newNode(5);

	
	if (identicalTrees(root1, root2))
		cout << "Both trees are identical.";
	else
		cout << "Trees are not identical.";

	return 0;
}


