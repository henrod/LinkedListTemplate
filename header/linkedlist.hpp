#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "node.hpp"

template <typename T>
class LinkedList {
	public:
		LinkedList() { head = nullptr; };
		virtual 	~LinkedList();
		void 		print();
		void 		insert(T data);
		LinkedList 	reverseList();
		Node<T>*	getHead() const;
		void		setHead(Node<T>* node);
	private:
		Node<T> *head;
};

#endif //LINKEDLIST_H
