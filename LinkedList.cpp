/*
 * LinkedList.cpp
 *
 *  Created on: Apr 14, 2020
 *      Author: Jack
 */

#include "LinkedList.h"

//Default constructor
template <typename T>
LinkedList<T>::LinkedList(){
	size = 0;
	head = 0;
	tail = 0;
}
//Destructor
template <typename T>
LinkedList<T>::~LinkedList(){
	Node<T> * ptr = head;
	for(int i = 0; i < size; i++){
		ptr = ptr->next;
		delete ptr->prev;
	}
	delete ptr;
}

//Copy Constructor
template <typename T>
LinkedList<T>::LinkedList(const LinkedList<T> &list){

	size = list.size;
	//Setting head and tail to 0 here but they will be overridden by prepend();
	head = 0;
	tail = 0;


	Node<T> * ptr = list.head;
	for(int i = 0; i < size; i++){
		prepend(ptr->data);
		ptr = ptr->next;
	}
}
//Copy assignment operator
/*template <typename T>
LinkedList<T>::LinkedList<T>& operator = (const LinkedList<T> &list){
	return *this;
}*/


//Add a node to the front of the linked list
template <typename T>
void LinkedList<T>::append(T data){
	Node<T> * Nodeptr = new Node<T>(data, 0, 0);
	if(size != 0){
		Nodeptr->next = head;
		head->prev = Nodeptr;
	}else{
		tail = Nodeptr;
	}
	head = Nodeptr;
	size++;
}

//Add a node to the end of the linked list
template <typename T>
void LinkedList<T>::prepend(T data){
	Node<T> * Nodeptr = new Node<T>(data, 0, 0);
	if(size != 0){
		Nodeptr->prev = tail;
		tail->next = Nodeptr;
	}else{
		head = Nodeptr;
	}
	tail = Nodeptr;
	size++;
}

template <typename T>
void LinkedList<T>::insertNode(int index, T data){
	Node<T> * Nodeptr = new Node<T>(data, 0, 0);
	if(index == 0){
		append(Nodeptr);

	}else if(index == size){
		prepend(Nodeptr);
	}else{
		Node<T> * ptr = head;
		for(int i = 1; i < index; i++){
			ptr = ptr->next;
		}
		ptr->prev->next = Nodeptr;
		Nodeptr->prev = ptr->prev;
		Nodeptr->next = ptr;
		ptr->prev = Nodeptr;
	}
	size++;
}

template <typename T>
void LinkedList<T>::removeNode(int index){
	if(size == 0){
		cout << "Linked list is already empty.\n";
	}else{
		Node<T> * ptr = head;
		for(int i = 0; i < index; i++){
			ptr = ptr->next;
		}
		ptr->prev->next = ptr->next;
		ptr->next->prev = ptr->prev;
		delete ptr;
	}
	size--;
}

template <typename T>
void LinkedList<T>::print(){
	Node<T> * ptr = head;
	for(int i = 0; i < size; i++){
		//cout << "Node " << i << endl;
		ptr->print();
		cout << " ";
		ptr = ptr->next;
	}
	cout << endl;
}
