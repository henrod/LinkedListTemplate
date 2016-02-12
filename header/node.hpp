#ifndef NODE_H
#define NODE_H

template <typename T>
class Node {
	public:
		~Node();
		Node*	getNext();
		void 	setNext(Node *next);
		T	getData();
		void	setData(const T& data);
	protected:
		T	data;
		Node	*next;
};

#include "node.cpp"

#endif //NODE_H
