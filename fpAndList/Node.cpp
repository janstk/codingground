#include <stdio.h>
#include "Node.h"
Node::Node(int n)
{
	data = n;
	next = NULL;
}
Node::Node()
{
	data = NULL;
	next = NULL;
}
Node::Node(int n,Node *p)
{
	data = n;
	next = p;
}
int Node::getData()
{
	return data;
}
void Node::setData(int n)
{
	data = n;
}
void Node::setNext(Node *p)
{
	next = p;
}
Node * Node::getNext()
{
	return next;
}

