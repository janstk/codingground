#include<iostream>
#include"Node.h"
#include"LinkList.h"
using namespace std;
int main()
{
	LinkList l;
	for(int i=1;i<42;i++)
	{
		l.insert(i,i);
	}
	int n = 100;
	Node *p = l.getHeader()->getNext()->getNext()->getNext();
	cout<<"died:"<<endl;
	while(l.getLength()>3 )
	{
		Node *tmp = p;
		cout<<tmp->getData()<<" ";
		int step = 3;
		while(step-->0)
		{
			p=p->getNext();
			if(p==l.getHeader())
			{
				p=p->getNext();
			}
		}
		l.deleteNode(tmp);

	}
	cout<<endl;

	cout<<"not die:"<<endl;
	l.outputList();
		return 0;
}



