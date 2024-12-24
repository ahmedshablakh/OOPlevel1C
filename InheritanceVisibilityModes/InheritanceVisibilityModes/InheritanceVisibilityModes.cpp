#include<iostream>
using namespace std;
class A
{
private:
	int Salary=250000;

protected:

	string Work="PROGRAMER";
public:

	string FullName="AHMAD SHABLAKH";
};
class B : public A
{
	public:
	void Fun1()
	{
		cout << A::Work;
	}
};
class D : protected B
{

};
class E : private D
{

};
class F : public E
{
	D::FullName;
};
int main()
{

	A a1;
	a1.FullName;
	B b1;
	E e1;
	F f1;
	f1.
	b1.Fun1();


	return 0;
}