#pragma once
#include<iostream>
#include "clsEmployee.h";
using namespace std;
class clsPerson
{
private:
	int _ID;
	string _FirstName;
	string _LastName;
	string _Email;
	string _Phone;

public:
	clsPerson()
	{

	}
	clsPerson(int ID, string FirstName, string LastName, string Email, string Phone)
	{
		_ID = ID;
		_FirstName = FirstName;
		_LastName = LastName;
		_Email = Email;
		_Phone = Phone;
	}
	//Read only property
	int ID()
	{
		return _ID;
	}
	void SetFirstName(string FirstName)
	{
		_FirstName = FirstName;
	}
	string FirstName()
	{
		return _FirstName;
	}
	void SetLastName(string LastName)
	{
		_LastName = LastName;
	}
	string LastName()
	{
		return _LastName;
	}
	void SetPhone(string Phone)
	{
		_Phone = Phone;
	}
	string Phone()
	{
		return _Phone;
	}
	void SetEmail(string Email)
	{
		_Email = Email;
	}
	string Email()
	{
		return _Email;
	}
	string FullName()
	{
		return _FirstName + " " + _LastName;
	}





	void Print()
	{
		cout << "Info\n\n\n";
		cout << "-----------------------------\n";
		cout << "ID         : " << _ID << endl;
		cout << "First Name : " << _FirstName << endl;
		cout << "Last Name  : " << _LastName << endl;
		cout << "Full Name  : " << FullName() << endl;
		cout << "Email      : " << _Email << endl;
		cout << "Phone      : " << _Phone << endl;
		cout << "-----------------------------\n";
	}

	void  SendEmail(string Subject, string Body)
	{
		cout << "The following message sent successfully to email : " << _Email << endl;
		cout << "Subject : " << Subject << endl;
		cout << "Body      : " << Body << endl;
	}
	void SendSMS(string Message)
	{
		cout << "The following SMS sent successfully to phone : " << _Phone << endl;
		cout << Message << endl;
	}
};

