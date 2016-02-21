#ifndef NODE_H
#define NODE_H

#include <memory>

template <typename T>
class Node {
	public:
		std::unique_ptr<Node<T>>&	getNext();
		void 	setNext(std::unique_ptr<Node<T>>& next);
		T&		getData();
		void	setData(const T& data);
	protected:
		T	data;
		std::unique_ptr<Node<T>> next;
};

#include "node.cpp"

#endif //NODE_H
