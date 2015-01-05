#include<iostream>
#include<cstdlib>
#include<math.h>
#include"Node.h"
#include"LinkList.h"
using namespace std;
//一元多项式的实现
int main()
{
	LinkList l;
	int n,x;//共有n次项
	cout << "x=？" << endl;
	cin >> x;
	cout << "最高次幂？" << endl;
	cin >> n;
	n++;
	while (n-- > 1)
	{
		int m;//当前的系数
		cout << "x^" << n << "=?" << endl;
		cin >> m;
		l.insert(m, n + 10);
	}
	Node * tmp = l.getHeader()->getNext();
	int result = 0;
	int y = 1;//从一次幂开始
	if(tmp==l.getHeader()->getNext())
	{
		result = x;
	}
	while (tmp!= l.getHeader() && tmp != NULL)
	{
		result += pow(x,y) * (tmp->getData());
		tmp = tmp->getNext();
		y++;
	}
	cout<<"结果是:"<<result;
}





