#include<iostream>
using namespace std;

class classPerson
{
	class claEmployee
	{
	public:

		string _AddressLine1;
		string _AddressLine2;
		string _City;
		string _Country;
		string FullName;
		void Print()
		{

			cout << FullName << endl;
			cout << _AddressLine1 << endl;
			cout << _AddressLine2 << endl;
			cout << _City << endl;
			cout << _Country << endl;
		}

	};

public:

	claEmployee Emp;
	classPerson()
	{
		
		Emp._AddressLine1 = "AddressLine1";
		Emp._AddressLine2 = "AddressLine2";
		Emp._City = "City";
		Emp._Country = "Country";
	}


};

int main()
{

	classPerson P;
	P.Emp.Print();
	

	return 0;
}