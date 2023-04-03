#include "Node.h"
/* Node.cpp
*  Carter McCall
*  2 Apr. 2023
*  Purpose: 
*		linked list
*/

Node::Node(string n) {
	this->name = n;
	nextNode = nullptr;
}
int Node::getNumber() {
	return number;
}
Node* Node::getNextNode() {
	return nextNode;
}
void Node::setNextNode(Node* next) {
	nextNode = next;
}
string Node::getName() {
	return name;
}