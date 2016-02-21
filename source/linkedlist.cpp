#include <iostream>
#include <utility>
#include "linkedlist.hpp"

template <typename T>
void LinkedList<T>::print() const {
	for (Node<T>* node = head.get(); node != nullptr; node = node->getNext().get()) {
		std::cout << node->getData() << "->";
	}
	std::cout << "null" << std::endl;
}

template <typename T>
void LinkedList<T>::insert(const T& data) {
	std::unique_ptr<Node<T>> node (new Node<T>());
	node->setData(data);
	node->setNext(head);
	head = std::move(node);
}

template <typename T>
std::unique_ptr<Node<T>>& LinkedList<T>::getHead() {
	return head;
}

template <typename T>
void LinkedList<T>::setHead(std::unique_ptr<Node<T>>& node) {
	head = std::move(node);
}

template <typename T>
LinkedList<T> LinkedList<T>::reverseList() {
	LinkedList<T> rll;
	for (auto curr = std::move(head); curr != nullptr; curr = std::move(curr->getNext())) {
		std::unique_ptr<Node<T>> new_node (new Node<T>());
		new_node->setData(curr->getData());
		new_node->setNext(rll.getHead());
		rll.setHead(new_node);
	}
	return rll;
}
