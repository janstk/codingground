#ifndef STACK_H
#define STACK_H
#include"Node.h"

class Stack
{
	public:
		Stack();//创建一个空栈
		void push(Elem _data);
		Elem pop();
		void clear();
		Node * getTop();
	private:
		Node *top;
};

#endif // STACK_H
