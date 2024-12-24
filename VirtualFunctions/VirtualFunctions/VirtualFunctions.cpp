#include<iostream>
using namespace std;
class claPerson
{

public:
   virtual void Print()
	{
		cout << "Hi, Im a Person\n";
	}
};

class clasEmployee : public claPerson
{

public:
	void Print()
	{
		cout << "Hi, Im a Employee\n";
	}
};

class claStudent :public  claPerson
{
public:
	void Print()
	{
		cout << "Hi, Im a Student\n";
	}
};
int main()
{

	clasEmployee Employee;
	claStudent Student1;

	claPerson* Person1 = &Employee;
	claPerson* Person2 = &Student1;
	Person1->Print();
	Person2->Print();
	return 0;
}