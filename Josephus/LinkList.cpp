#include <stdio.h>
#include<iostream>
#include "LinkList.h"
#include"Node.h"
LinkList::LinkList()
{
	Node * node = new Node();
	header = node;
	header->setNext(header);
}
bool LinkList::isEmpty()
{
	if (header->getNext() == header)
	{
		return true;
	}
	else
	{
		return false;
	}
}
void LinkList::insert(int data, int pos)
{

	Node * tmp = new Node(data);
	insert(tmp, pos);

}
void LinkList::insert(Node * ps, int pos)
{
	int n = pos;
	Node * tmp = header;

	while (n-- > 0 && tmp->getNext() != header)
	{
		tmp = tmp->getNext();
	}

	if (tmp->getNext() == header)
	{
		tmp->setNext(ps);
		ps->setNext(header);
	}
	else
	{
		ps->setNext(tmp->getNext());
		tmp->setNext(ps);
	}

}
int LinkList::find(int data)
{
	int n = 0;
	Node * tmp = header;

	do
	{
		if (tmp->getData() == data)
		{
			return n;
		}

		n++;
		tmp = tmp->getNext();
	}
	while (tmp != NULL);

	return 0;
}
Node * LinkList::getElem(int pos)
{
	int n = pos;
	Node * tmp = header;

	while (n-- > 1 && tmp != NULL)
	{
		tmp = tmp->getNext();
	}
	return tmp;
}
void LinkList::deleteNode(int pos)
{
	Node * p = getElem(pos);
	Node * tmp;
	tmp = p->getNext();
	p->setNext(p->getNext()->getNext());
	delete tmp;

}
void LinkList::deleteList()
{
	Node * tmpPointer = header;

	while (tmpPointer->getNext() != header)
	{
		Node * cur = tmpPointer->getNext();
		tmpPointer->setNext(cur->getNext());
		delete cur;

	}
}

void LinkList::outputList()
{
	Node * tmp = header;

	while (tmp->getNext() != header)
	{
		std::cout << tmp->getNext()->getData() << " ";
		tmp = tmp->getNext();
	}

	std::cout << "\n";
}
