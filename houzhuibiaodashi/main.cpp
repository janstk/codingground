#include <iostream>
#include "Stack.h"
using namespace std;

int stringToInt(char a) // 优先级函数
{
	int n;

	switch (a)
	{
		case '+':
		case '-':
			n = 1;
			break;

		case '*':
		case '/':
			n = 2;
			break;

		case '#':
		case '^':
			n = 3;
			break;

		case '(':
			n = 5;
			break;

		case ')':
			n = 6;
			break;

		default:
			n = -1;
			break;


	}

	return n;
}

int main()
{
	string s;
	Stack tor;
	cin >> s;

	for (string::iterator a = s.begin(); a < s.end(); a++)
	{
		if (stringToInt(*a) != -1) //如果输入的是一个表达式符号
		{
			if (tor.isEmpty()) //空栈时直接入栈
			{
				tor.push(*a);
				continue;
			}
			if (stringToInt(*a) == 5) //如果是“（”直接入栈
			{
				tor.push(*a);
				continue;
			}
			if (stringToInt(*a) == 6) //如果是“）”就一直弹栈直到到达“（”。而“（”不显示出来i
			{
				while (stringToInt(tor.getTop()->getData()) != 5 && !tor.isEmpty())
				{
					cout << (char)tor.pop() << " ";
				}
				if(stringToInt(tor.getTop()->getData()) == 5)
				{
					tor.pop();
				}
				continue;
			} //如果栈顶>读入的就直接入栈
			if (stringToInt(*a)>0 && stringToInt(*a)<4) //如果是运算符的话就比较大小，栈顶<读入的就 一直出栈直到末尾或到达“（”
			{
				while (stringToInt(tor.getTop()->getData())!=5&&stringToInt(*a) <= stringToInt(tor.getTop()->getData()) && !tor.isEmpty())
				{
					cout << (char)tor.pop() << " ";
				}
				tor.push(*a); //最后将次元素入栈
				continue;
			}
		}
		else
			if (isdigit(*a)) //数字直接输出
			{
				cout << *a << " ";
				continue;
			}
	}

	while (!tor.isEmpty()) //最后输出栈中所有元素
	{
		cout << (char)tor.pop() << " ";
	}

	return 0;
}
