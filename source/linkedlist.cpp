#include "linkedlist.hpp"
#include "node.cpp"
#include <iostream>

template <typename T>
LinkedList<T>::~LinkedList() {
	delete head;
}

template <typename T>
void LinkedList<T>::print() {
	for (Node<T> *node = head; node != nullptr; node = node->getNext()) {
		std::cout << node->getData() << "->";
	}
	std::cout << "null" << std::endl;
}

template <typename T>
void LinkedList<T>::insert(T data) {
	Node<T> *node = new Node<T>();
	node->setData(data);
	node->setNext(head);
	head = node;
}

template <typename T>
Node<T>* LinkedList<T>::getHead() const {
	return head;
}

template <typename T>
void LinkedList<T>::setHead(Node<T> *node) {
	head = node;
}

template <typename T>
LinkedList<T> LinkedList<T>::reverseList() {
	LinkedList<T> rll;
	for (Node<T>* curr = head; curr != NULL; curr = curr->getNext()) {
		Node<T>* new_node = new Node<T>();
		new_node->setData(curr->getData());
		new_node->setNext(rll.getHead());
		rll.setHead(new_node);
	}
	return rll;
}
