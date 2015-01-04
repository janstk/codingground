#include<iostream>
#include"Node.h"
#include"LinkList.h"
using namespace std;
int main()
{
	LinkList l;

	for(int i=1;i<10;i++)
	{
		l.insert(i,i);
	}

	void(*fp)(Node *node) = [=](Node* node){cout<<node->getData()<<endl;};
	l.visit(fp);

		return 0;
}
