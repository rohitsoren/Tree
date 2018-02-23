#include <iostream>
#include <stack>

struct Node
{
	int data;
	Node* leftSubtree;
	Node* rightSubtree;
};


int findMaxLeftSubtree(Node* root)
{
	int l_count = 0;
	while(root)
	{
		l_count++;
		root = root->leftSubtree;
	}
	return l_count;
}