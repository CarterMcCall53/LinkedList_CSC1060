/* LinkedList.cpp
*  Carter McCall
*  2 Apr. 2023
*  Purpose:
*		Linked List
*/

#include "LinkedList.h"

LinkedList::LinkedList() {
	first = last = newNode = nullptr;
	queueSize = 0;
}
Node* LinkedList::getFirst() {
	return first;
}
string LinkedList::popFirst() {
	string retVal = "";
	if (first != nullptr) {
		retVal = first->getName();
		Node* temp = first;
		first = first->getNextNode();
		queueSize--;
		delete temp;
	}
	return retVal;
}
Node* LinkedList::getLast() {
	return last;
}
Node* LinkedList::getNewNode() {
	return newNode;
}
void LinkedList::setFirst(Node* n) {
	first = n;
}
bool LinkedList::addNode(string n) {
	bool retVal = true;
	if (queueSize++ >= MAXSTACK) retVal = false;
	else {
		newNode = new Node(n);
		if (last != nullptr) last->setNextNode(newNode);
		last = newNode;
		if (first == nullptr) first = newNode;
	}
	return retVal;
}
void LinkedList::setLast(Node* node) {
	last = node;
}
