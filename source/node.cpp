#include "node.hpp"

template <typename T>
std::unique_ptr<Node<T>>& Node<T>::getNext() {
	return this->next;
}

template <typename T>
void Node<T>::setNext(std::unique_ptr<Node<T>>& next) {
	this->next = std::move(next);
}

template <typename T>
T& Node<T>::getData() {
	return this->data;
}

template <typename T>
void Node<T>::setData(const T& data) {
	this->data = data;
}
