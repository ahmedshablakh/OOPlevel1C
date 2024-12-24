#include<iostream>
using namespace std;

class clPerson
{

private:
	string _FirstName;
	string _LastName;
	short _Id = 1500;
public:
	void SetFirstName(string FirstName)
	{
		_FirstName = FirstName;
	}
	string GetFirstName()
	{
		return _FirstName;
	}
	// Property Get, this is read only property because we don't have set function
	short GetId()
	{
		return _Id;
	}
	void SetLastName(string LastName)
	{
		_LastName = LastName;
	}
	string GetLastName()
	{
		return _LastName;
	}
	string GetFullName()
	{
		return _FirstName + " " + _LastName;
	}
	__declspec(property(get = GetFirstName, put = SetFirstName)) string FirstName;
	__declspec(property(get = GetLastName, put = SetLastName)) string LastName;

};

int main()
{
	clPerson P;
	P.SetFirstName("Ahmad");
	P.SetLastName("Shablakh");

	P.FirstName = "Ahmad";
	P.LastName = "Shablakh";
	cout << "FirstName : " << P.GetFirstName() << endl;
	cout << "Last Name : " << P.GetLastName() << endl;

	cout << "Using __declspec(property(get = GetLastName, put = SetLastName)) string LastName;\n";
	cout << "FirstName : " << P.FirstName << endl;
	cout << "Last Name : " << P.LastName << endl;
	cout << "Full Name : " << P.GetFullName() << endl;
	cout << "Person ID : " << P.GetId() << endl;
	return 0;
}
