#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "node.hpp"

template <typename T>
class LinkedList {
	public:
		void 				print() const;
		void 				insert(const T& data);
		LinkedList 	reverseList();
		std::unique_ptr<Node<T>>&	getHead();
		void				setHead(std::unique_ptr<Node<T>>& node);
	private:
		std::unique_ptr<Node<T>> head;
};

#include "linkedlist.cpp"

#endif //LINKEDLIST_H
