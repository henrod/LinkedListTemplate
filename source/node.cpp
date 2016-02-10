#include "node.hpp"

template <typename T>
Node<T>*	Node<T>::getNext() 		{ return this->next; }

template <typename T>
void 		Node<T>::setNext(Node<T> *next) { this->next = next; }

template <typename T>
T 		Node<T>::getData() 		{ return this->data; }

template <typename T>
void 		Node<T>::setData(const T& data) { this->data = data; }
