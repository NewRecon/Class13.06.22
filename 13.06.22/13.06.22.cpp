#include <iostream>
#include "Stack.cpp"
using namespace std;

int main()
{
	Stack<int> st1(5);
	Stack<int> st2(7);
	st1.push(1);
	st1.push(1);
	st1.push(1);
	st1.push(1);
	st1.push(1);

	st2.push(2);
	st2.push(2);
	st2.push(2);
	st2.push(2);
	st2.push(2);
	st2.push(2);
	st2.push(2);

	//st1.swap(st2);

	while (!st1.empty())
	{
		cout << st1.top() << " ";
		st1.pop();
	}
	cout << endl;
	while (!st2.empty())
	{
		cout << st2.top() << " ";
		st2.pop();
	}
}