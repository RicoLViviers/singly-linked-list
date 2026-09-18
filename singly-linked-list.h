#pragma once

#include <iostream>

class Node
{
public:
	int data;

	Node* next;
	Node* insertAtFront(Node* head, int x);
	Node* insertAtEnd(Node* head, int x);
	Node* insertAtPos(Node* head, int pos, int x);
	void traverseList(Node* head);

	Node(int data);
};
