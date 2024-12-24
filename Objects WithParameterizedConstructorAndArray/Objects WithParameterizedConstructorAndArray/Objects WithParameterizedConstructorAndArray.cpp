#include<iostream>
using namespace std;
class clsA
{
public:

	clsA(int Value)
	{
		x = Value;
	}
	int x;

	void Print()
	{
		cout << "The value of x = " << x << endl;

	}
};

int main()
{
	clsA Arr[] = { clsA(10), clsA(20), clsA(40),clsA(50) };

	for (int i = 0;i < 4;i++)
	{
		Arr[i].Print();
	}
}