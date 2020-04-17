//============================================================================
// Name        : hw14.cpp
// Author      : Jack Schmid
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "hw14.h"

int main() {

	cout << "Part 1" << endl;
	LinkedList<int> list;
	list.append(1);
	list.prepend(2);
	list.append(3);
	list.prepend(4);
	list.append(5);
	list.prepend(6);
	cout << "Linked List 1: ";
	list.print();


	cout << "Part 2" << endl;
	cout << "Linked List 1 copy constructor: ";
	LinkedList<int> list2 = list;
	list2.print();
	/*cout << "Linked List 1: ";
	list.print();
	cout << "Linked List 2: ";
	list2.print();*/
	cout << "Linked List 1 copy assignment: ";
	LinkedList<int> list3;
	list3 = list;
	list3.print();

	/*cout << "Linked List 1: ";
	list.print();
	cout << "Linked List 3: ";
	list3.print();*/
	return 0;
}
