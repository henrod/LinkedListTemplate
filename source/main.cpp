#include <iostream>
#include <iomanip>
#include "linkedlist.hpp"

int main() {
	LinkedList<float> ll;
	ll.insert(10.1);
	ll.insert(20.2);
	ll.insert(30.3);
	ll.insert(40.4);
	ll.insert(50.5);
	ll.insert(60.6);
	ll.print();

	LinkedList<float> rll = ll.reverseList();
	rll.print();

	return 0;
}
