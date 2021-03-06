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
	for(int i = 0; i < size - 1; i++){
		ptr = ptr->next;
		delete ptr->prev;
	}
	delete ptr;
}

//Copy Constructor
template <typename T>
LinkedList<T>::LinkedList(const LinkedList<T> &list){

	size = 0;
	//Setting head and tail to 0 here but they will be overridden by prepend();
	head = 0;
	tail = 0;


	Node<T> * ptr = list.head;
	for(int i = 0; i < list.size; i++){
		prepend(ptr->data);
		ptr = ptr->next;
	}
}
//Copy assignment operator
template <typename T>
LinkedList<T>& LinkedList<T>::operator = (const LinkedList<T> &list){

	size = 0;
	//Setting head and tail to 0 here but they will be overridden by prepend();
	head = 0;
	tail = 0;


	Node<T> * ptr = list.head;
	for(int i = 0; i < list.size; i++){
		prepend(ptr->data);
		ptr = ptr->next;
	}
	return *this;
}


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
		append(data);

	}else if(index == size){
		prepend(data);
	}else{
		Node<T> * ptr = head;
		for(int i = 0; i < index; i++){
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


template <typename T>
LinkedList<T> LinkedList<T>::reverse(){
	LinkedList<T> listReverse;
	Node<T> * ptr = this->head;
	for(int i = 0; i < this->size; i++){
		listReverse.append(ptr->data);
		ptr = ptr->next;
	}
	return listReverse;
}

