#include<iostream>
#include<cstdlib>
#include"Node.h"
#include"LinkList.h"
using namespace std;
int main()
{
	LinkList l;

	for(int i=1;i<50;i++)
	{
		l.insert((int)rand()%20,i);
	}
	l.outputList();
	cout<<"after sort"<<endl;
	l.sort();
	l.outputList();
}
