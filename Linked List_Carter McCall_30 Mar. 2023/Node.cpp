/* Node.cpp
*  Carter McCall
*  2 Apr. 2023
*  Purpose: 
*		linked list
*/

#include "Node.h"

Node::Node(string n) {
	this->name = n;
	nextNode = nullptr;
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