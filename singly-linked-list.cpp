#include "singly-linked-list.h"


Node::Node(int data)
{
	this->data = data;
	this->next = nullptr;
}


Node* Node::insertAtFront(Node* head, int x)
{
	Node* tempHead = new Node(x);

	tempHead->next = head;



	head = tempHead;

	return head;
}

Node* Node::insertAtEnd(Node* head, int x)
{
	if (head == nullptr)
	{
		return new Node(x);
	}
	Node* tempHead = head;
	while (tempHead->next != nullptr) {
		tempHead = tempHead->next;
	}

	tempHead->next = new Node(x);



	return head;
}


Node* Node::insertAtPos(Node* head, int pos, int x)
{
	Node* tempHead = head;

	for (int i = 0; i < pos - 1; i++)
	{
		tempHead = tempHead->next;
	}

	Node* newNode = new Node(x);

	newNode->next = tempHead->next;
	tempHead->next = newNode;

	return head;
}

void Node::traverseList(Node* head)
{
	while (head != nullptr)
	{
		std::cout << head->data;
		if (head->next != nullptr)
		{
			std::cout << "->";
		}
		head = head->next;
	}

	std::cout << std::endl;
}



int main()
{
	Node* head = new Node(340);

	head->next = new Node(10);
	head->next->next = new Node(13);
	head->next->next->next = new Node(1);
	head->next->next->next->next = new Node(79);
	head->next->next->next->next->next = new Node(69);

	head->traverseList(head->insertAtPos(head, 3, 130));

	return 0;
}
