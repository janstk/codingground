#include <iostream>
#include "Stack.h"
using namespace std;

int main()
{
	Stack s;
	for(int i=0;i<10;i++)
	{
		s.push(i);
	}
	for(int i=0;i<10;i++)
	{
		cout<<s.pop()<<" ";
	}
	s.clear();
	cout<<s.pop()<<endl;
    return 0;
}
