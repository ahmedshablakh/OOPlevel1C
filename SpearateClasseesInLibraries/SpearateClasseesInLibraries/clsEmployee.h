#pragma once
#include<iostream>
#include "clsPerson.h";
using namespace std;

class clsEmployee : public clsPerson
{

private:
	string 	_Title;
	string _Department;
	float	_Salary;

public:
	clsEmployee(int ID, string FirstName, string LastName, string Email, string Phone, string Title, string Department, float Salary) :clsPerson(ID, FirstName, LastName, Email, Phone)
	{
		_Title = Title;
		_Department = Department;
		_Salary = Salary;
		
	}

	void SetTitle(string Title)
	{
		_Title = Title;
	}
	string Title()
	{
		return _Title;
	}
	void SetDepartment(string Department)
	{
		_Department = Department;
	}
	string Department()
	{
		return _Department;
	}

	void SetSalary(float Salary)
	{
		_Salary = Salary;
	}
	float Salary()
	{
		return _Salary;
	}
	void Print()
	{
		//clPrson::Print();
		cout << "Info\n\n\n";
		cout << "-----------------------------\n";
		cout << "ID         : " << ID() << endl;
		cout << "First Name : " << FirstName() << endl;
		cout << "Last Name  : " << LastName() << endl;
		cout << "Full Name  : " << FullName() << endl;
		cout << "Title      : " << _Title << endl;
		cout << "Department : " << _Department << endl;
		cout << "Salary     : " << _Salary << endl;
		cout << "Email      : " << Email() << endl;
		cout << "Phone      : " << Phone() << endl;
		cout << "-----------------------------\n";
	}

};
class clsDeveloper : public clsEmployee
{
private:
	string _MainProgrammingLanguage;

public:

	clsDeveloper(int ID, string FirstName, string LastName, string Email, string Phone, string Title, string Department, float Salary, string MainProgrammingLanguage)
		:clsEmployee(ID, FirstName, LastName, Email, Phone, Title, Department, Salary)
	{
		_MainProgrammingLanguage = MainProgrammingLanguage;

	}

	void SetMainProgrammingLanguage(string MainProgrammingLanguage)
	{
		_MainProgrammingLanguage = MainProgrammingLanguage;
	}
	string MainProgrammingLanguage()
	{
		return _MainProgrammingLanguage;
	}
	void Print()
	{
		//clPrson::Print();
		cout << "Info\n\n\n";
		cout << "-----------------------------\n";
		cout << "ID         : " << ID() << endl;
		cout << "First Name : " << FirstName() << endl;
		cout << "Last Name  : " << LastName() << endl;
		cout << "Full Name  : " << FullName() << endl;
		cout << "Title      : " << Title() << endl;
		cout << "Department : " << Department() << endl;
		cout << "Salary     : " << Salary() << endl;
		cout << "Email      : " << Email() << endl;
		cout << "Phone      : " << Phone() << endl;
		cout << "MainProgrammingLanguage : " << _MainProgrammingLanguage << endl;
		cout << "-----------------------------\n";
	}
};

