/*
 * Node.cpp
 *
 *  Created on: Apr 14, 2020
 *      Author: Jack
 */


#include "Node.h"

template <typename T>
Node<T>::Node(){
	this->data = *(new T());
	next = nullptr;
	prev = nullptr;
}

template <typename T>
Node<T>::Node(T data, Node * next, Node * prev){
	this->data = data;
	this->next = next;
	this->prev = prev;
}

template <typename T>
Node<T>::~Node(){
}


template <typename T>
Node<T>::Node(const Node<T> &node){
	data = node.data;
	next = node.next;
	prev = node.prev;
}

template <typename T>
void Node<T>::print(){
	//cout << "data: " << data << endl;
	cout << data;
}
