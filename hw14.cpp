//============================================================================
// Name        : hw14.cpp
// Author      : Jack Schmid
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "hw14.h"

int main() {

	cout << "Part 1:" << endl;
	LinkedList<int> list;
	list.append(62);
	list.append(78);
	list.append(88);
	list.prepend(143);
	list.prepend(60);
	cout << "Linked List 1: ";
	list.print();


	cout << "\nPart 2:" << endl;
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


	cout << "\nPart 3:" << endl;
	LinkedList<int> listReverse;
	listReverse = list.reverse();
	cout << "Linked List 1 reversed: ";
	listReverse.print();


	cout << "\nPart 4 (after deleting the third node): " << endl;
	list.removeNode(2);
	listReverse.removeNode(2);
	cout << "Linked List 1: ";
	list.print();
	cout << "Reversed Linked List: ";
	listReverse.print();


	cout << "\nPart 5 (after adding a node in the middle of the list): " << endl;
	list.insertNode(2, 70);
	listReverse.insertNode(2, 70);
	cout << "Linked List 1: ";
	list.print();
	cout << "Reversed Linked List: ";
	listReverse.print();

	cout << "\n\nPart 6 (1-5 with doubles): \n\n" << endl;

	cout << "Part 1:" << endl;
	LinkedList<double> listD;
	listD.append(62.3);
	listD.append(78.4);
	listD.append(88.5);
	listD.prepend(143.2);
	listD.prepend(60.1);
	cout << "Linked List 1: ";
	listD.print();


	cout << "\nPart 2:" << endl;
	cout << "Linked List 1 copy constructor: ";
	LinkedList<double> listD2 = listD;
	listD2.print();
	cout << "Linked List 1 copy assignment: ";
	LinkedList<double> listD3;
	listD3 = listD;
	listD3.print();


	cout << "\nPart 3:" << endl;
	LinkedList<double> listReverseD;
	listReverseD = listD.reverse();
	cout << "Linked List 1 reversed: ";
	listReverseD.print();


	cout << "\nPart 4 (after deleting the third node): " << endl;
	listD.removeNode(2);
	listReverseD.removeNode(2);
	cout << "Linked List 1: ";
	listD.print();
	cout << "Reversed Linked List: ";
	listReverseD.print();


	cout << "\nPart 5 (after adding a node in the middle of the list): " << endl;
	listD.insertNode(2, 70.3);
	listReverseD.insertNode(2, 70.3);
	cout << "Linked List 1: ";
	listD.print();
	cout << "Reversed Linked List: ";
	listReverseD.print();

	return 0;
}
