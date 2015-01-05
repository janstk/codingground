#ifndef NODE_H
#define NODE_H


class Node
{
	public:
		Node();
		Node(int n);
		Node(int n,Node *p);
		int getData(void);
		void setData(int n);
		void setNext(Node *p);
		Node * getNext(void);
	private:
		int data;
		Node *next;
};

#endif // NODE_H
