#include <stack>

struct Node
{
	int data;
	Node* leftSubtree;
	Node* rightSubtree;
};

void preorder(Node* root)
{
	std::stack<Node*> mystack;
	Node* curr_node = NULL;
	if(root == NULL)
	{
		return;
	}
	mystack.push(root);
	
	while(!mystack.empty())
	{
		curr_node = mystack.top();
		std::cout << curr_node->data << "-->";
		if(curr_node->leftSubtree)
		{
			mystack.push(curr_node->leftSubtree);
		}
		else
		{
			mystack.pop();
			if(curr_node->rightSubtree)
			{
				mystack.push(curr_node->rightSubtree);
			}
		}
	}
}