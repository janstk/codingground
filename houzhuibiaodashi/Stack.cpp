#include <stdio.h>
#include "Stack.h"

Stack::Stack()
{
	Node * node = new Node(0);
	top = node;
}
void Stack::push(Elem _data)
{
	Node * node = new Node(_data);
	node->setNext(top);
	top  = node;
}
Elem Stack::pop()
{
	if(top->getNext()!=NULL)
	{
	Node * p = top;
	Elem data = p->getData();
	top = top->getNext();
	delete p;
	return data;
	}
	return 0;

}
Node * Stack::getTop()
{
	return top;
}
void Stack::clear()
{
	while(top->getNext()!=NULL)
	pop();
}
bool Stack::isEmpty()
{
	if (top->getNext()==NULL)
		return true;
	else return false;
}
