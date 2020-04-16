/*
 * Node.h
 *
 *  Created on: Apr 14, 2020
 *      Author: Jack
 */

#ifndef NODE_H_
#define NODE_H_

#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

template <class T>
class Node{
private:
public:
	T data;
	Node * next;
	Node * prev;
	//Default Constructor
	Node();
	//Parameterized Constructor
	Node(T data, Node * next, Node * prev);
	//Destructor
	~Node();
	//Copy Constructor
	Node(const Node<T> &node);

	//Function to print out a node's data
	void print();
};


#endif /* NODE_H_ */
