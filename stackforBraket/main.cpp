#include <iostream>
#include "Stack.h"
using namespace std;
int main()
{
	string s;
	Stack tor;
	cin >> s;

	for (string::iterator a = s.begin(); a < s.end(); a++)
	{
		if (*a == '(' || *a == '[' || *a == '{') //如果是左括号的话无条件入栈
		{
			tor.push(*a);
			continue;
		}
		if (*a == ')') //如果是右边括号的话判断左边括号，配对的话就弹出
		{
			if (tor.getTop()->getData() == '(')
			{
				tor.pop();
			}
			else
			{
				tor.push(*a);
			}
			continue;
		}
		if (*a == ']')
		{
			if (tor.getTop()->getData() == '[')
			{
				tor.pop();
			}
			else
			{
				tor.push(*a);
			}
			continue;
		}
		if (*a == '}')
		{
			if (tor.getTop()->getData() == '{')
			{
				tor.pop();
			}
			else
			{
				tor.push(*a);
			}
			continue;
		}
	}
	if (tor.isEmpty())
	{
		cout << "succcess";
	}
	else
	{
		cout << "faild";
	}
	return 0;
}
