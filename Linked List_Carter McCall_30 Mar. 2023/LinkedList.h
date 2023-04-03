#pragma once
/* LinkedList.h
*  Carter McCall
*  2 Apr. 2023
*  Purpose:
*		Linked List
*/

#include "Node.h"

class LinkedList
{
private:
	Node* first;
	Node* last;
	Node* newNode;
	int queueSize;
	const int MAXSTACK = 10;
public:
	LinkedList();
	Node* getFirst();
	Node* getLast();
	Node* getNewNode();
	void setFirst(Node*);
	bool addNode(string);
	int popNode(int);
	void setLast(Node*);
	string popFirst();
	string peekFirst();
};

