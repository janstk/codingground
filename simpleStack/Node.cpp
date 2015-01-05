#include <stdio.h>
#include "Node.h"
Node::Node(Elem _data)
{
	data = _data;
	next = NULL;
}

Elem Node::getData()
{
	return data;
}
Node *Node::getNext()
{
	return next;
}
void Node::setData(Elem _data)
{
	data = _data;
}
void Node::setNext(Node *node)
{
	next = node;
}
