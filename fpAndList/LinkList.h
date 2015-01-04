#ifndef LINKLIST_H
#define LINKLIST_H
#include"Node.h"

class LinkList
{
public:
	LinkList(); //构造方法
	bool isEmpty(); //判断是否为空
	void insert(int data, int pos); //指定位置插入元素（直接插入数据）
	int find(int data);//查找元素位置(返回一个int类型）
	Node * getElem(int pos); //获取指定位置元素
	void deleteNode(int pos);//删除指定位置元素(传入位置）
	void deleteList();//删除所有元素
	void outputList();//打印当前的所有元素
	int getLength()
	{
		int count = 1;
		Node * pointer = header;

		while (pointer->getNext() != header)
		{
			pointer = pointer->getNext();
			count++;
		}

		return count;

	}
	void deleteNode(Node * node)
	{
		Node * p = header;
		int n = getLength();
		while (p->getNext() != p && n>=1)
		{

			if (p->getNext() == node)
			{
				p->setNext(node->getNext());
				delete node;
				break;
			}
			p=p->getNext();
			n=n-1;
		}
	}
	void visit(void(*fp)(Node*node))
	{
		Node * tmp = header;

		while (tmp->getNext() != header)
		{
			(*fp)(tmp->getNext());
			tmp = tmp->getNext();
		}
	}
	Node * getHeader()
	{
		return header;
	}
private:
	Node * header; //头指针
	void insert(Node * p, int pos);
	Node * getLast()
	{
		Node * tmp = header;

		while (tmp->getNext() != header)
		{
			tmp = tmp->getNext();
		}

		return tmp;
	}

};

#endif // LINKLIST_H
