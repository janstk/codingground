#ifndef STACK_H
#define STACK_H
#include"Node.h"

class Stack
{
	public:
		Stack();
		void push(Elem _data);
		Elem pop();
		void clear();
		Node * getTop();
		bool isEmpty();
	private:
		Node *top;
};

#endif // STACK_H
