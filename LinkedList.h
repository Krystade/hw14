/*
 * LinkedList.h
 *
 *  Created on: Apr 14, 2020
 *      Author: Jack
 */

#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_

#include "Node.h"

template <class T>
class LinkedList{
private:
	int size;
	Node<T> * head;
	Node<T> * tail;
public:
	//Default Constructor
	LinkedList();
	//Destructor
	~LinkedList();

	//Copy Constructor
	LinkedList(const LinkedList<T> &list);
	//Copy assignment operator
	LinkedList<T>& operator = (const LinkedList<T> &list);

	//Function to add a node to the front of the list
	void append(T data);
	//Function to add a node to the end of the list
	void prepend(T data);
	//Function to add a node at an index in the list
	void insertNode(int index, T data);
	//Removes a node from the list and frees up memory
	void removeNode(int index);
	//Prints out all the nodes and their data
	void print();
	//Returns a LinkedList object with the values reversed
	LinkedList<T> reverse();

};


#endif /* LINKEDLIST_H_ */
