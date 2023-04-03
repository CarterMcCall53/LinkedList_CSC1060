/* Test.cpp
*  Carter McCall
*  2 Apr. 2023
*  Purpose:
*		Test Linked List
*/

#include "LinkedList.h"

int main() {
	string names[] = { "Carter", "Jimmy", "Angel", "Faith", "Kris", "Demon", "Brendan", "Ash", "Time", "Emilia", "Dave" };
	LinkedList linkedList;
	bool addThem = true;
	int i = 0;
	cout << "Add all items to the queue\n" << endl;
	while (addThem) {
		addThem = linkedList.addNode(names[i]);
		cout << names[i++];
		if (addThem) cout << " was successfully added" << endl;
		else cout << " was not added" << endl;
	}
	cout << "\nPop all the items in the queue\n" << endl;
	string entry = "Seed";
	do {
		entry = linkedList.popFirst();
		if (entry.size() == 0) cout << "No more names" << endl;
		else cout << entry << " is leaving the queue" << endl;
	} while (entry.size() != 0);
}