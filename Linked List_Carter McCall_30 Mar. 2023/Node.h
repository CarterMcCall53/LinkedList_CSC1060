#pragma once
/* Node.h
*  Carter McCall
*  2 Apr. 2023
*  Purpose: 
*		Hold node class
*/

#include <iostream>
using namespace std;

class Node
{
private:
	int number;
	string name;
	Node* nextNode;
public:
	Node(string);
	Node* getNextNode();
	void setNextNode(Node*);
	string getName();
};