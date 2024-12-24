#include<iostream>
using namespace std;


class claA
{
private:
	int var1 = 150;
	string Name = "AHAMD SHABLAKH";
public:

	int var2 = 180;

	friend void MySum();
};
void MySum()
{
	claA A1;
	cout<<A1.Name;
}


int main()
{
	claA a;
	MySum();
	return 0;
}