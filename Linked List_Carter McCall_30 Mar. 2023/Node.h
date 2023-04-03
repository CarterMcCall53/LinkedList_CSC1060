#pragma once
/* Node.h
*  Carter McCall
*  2 Apr. 2023
*  Purpose: 
*		Hold node class
*/

#include <iostream>
#include <string>
using namespace std;

class Node
{
private:
	int number;
	string name;
	Node* nextNode;
public:
	Node(string);
	int getNumber();
	Node* getNextNode();
	void setNextNode(Node*);
	string getName();
};

