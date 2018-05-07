#include <iostream>
using namespace std;

struct Node
{
	int data = 0;
	Node * next = NULL;
};

class Stack
{
	Node * top = NULL;
public:
	Stack();
	~Stack();
	void push(int data_for_new_node);
	int pop();
	bool is_empty();
};

Stack::Stack()
{
	top = NULL;
}
Stack::~Stack()
{

}
void Stack::push(int data_for_new_node)
{
	//creating new node to add to stack
	Node * node = new Node;
	node->data = data_for_new_node;
	//checking to see if stack is empty, then adding it to the top
	if (is_empty()/*top == NULL*/)
	{
		top = node;
	}
	else
	{
		node->next = top;
		top = node;
	}
}
int Stack::pop()
{
	if (top == NULL)
	{
		cout << "Stack is empty, nothing to pop" << endl;
		return -1;
	}
	//selecting the node we are going to pop
	Node * delete_me = top;
	//getting the data we need to return
	int return_me = delete_me->data;
	//moving top and deleting the top node
	top = top->next;
	delete_me->next = NULL;
	delete delete_me;
	//returning value we secured
	return return_me;
}

bool Stack::is_empty()
{
	return top == NULL;
}

int main()
{
	Stack * stack = new Stack;
	//populating stack
	cout << "Contents being pushed into the stack." << endl;
	for (int i = 1; i <= 10; i++)
	{
		cout << i << " ";
		stack->push(i);
	}

	cout << endl;

	//printing contents of the stack
	cout << "Emptying the stack to show the contents." << endl;
	while (!stack->is_empty())
	{
		cout << stack->pop() << " ";
	}


	cout << endl;

	system("pause");
	return 0;
}