#ifndef NODE_H
#define NODE_H
typedef int Elem;

class Node
{
	public:
	Node(Elem data);
	Elem getData();
	Node * getNext();
	void setData(Elem data);
	void setNext(Node *node);
	private:
	Elem data;
	Node *next;
};

#endif // NODE_H
