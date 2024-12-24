#include<iostream>
using namespace std;
class clEmployee
{
private:
	int _ID;
	string	_FirstName;
	string _LastName;
	string 	_Title;
	string	_Email;
	string	_Phone;
	string _Department;
	float	_Salary;

public:
	clEmployee(int ID, string FirstName, string LastName,  string Department, string Title, string	Email, string Phone, float Salary)
	{
		_ID = ID;
		_FirstName = FirstName;
		_LastName = LastName;
		_Department = Department;
		_Title = Title;
		_Email = Email;
		_Phone = Phone;
		_Salary = Salary;
	}
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
	void SetDepartment(string Department)
	{
		_Department = Department;
	}
	string Department()
	{
		return _Department;
	}

	void SetPhone(string Phone)
	{
		_Phone = Phone;
	}
	string Phone()
	{
		return _FirstName;
	}
	void SetEmail(string Email)
	{
		_Email = Email;
	}
	string Email()
	{
		return _Email;
	}
	void SetSalary(float Salary)
	{
		_Salary = Salary;
	}
	float Salary(float Salary)
	{
		return _Salary;
	}
	void SetTitle(string Title)
	{
		_Title = Title;
	}
	string Title()
	{
		return _Title;
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
		cout << "Department : " << _Department << endl;
		cout << "Title      : " << _Title << endl;
		cout << "Email      : " << _Email << endl;
		cout << "Phone      : " << _Phone << endl;
		cout << "Salary     : " << _Salary << endl;
		cout << "-----------------------------\n";
	}
	void  SendEmail(string Subject, string Body)
	{
		cout << "The following message sent successfully to email : " << _Email << endl;
		cout << "Subject : " << Subject << endl;
		cout << "Body      : " << Body << endl;
	}
	void SendPhone(string Message)
	{
		cout << "The following SMS sent successfully to phone : " << _Phone << endl;
		cout << Message << endl;
	}


};



int main()
{
	clEmployee Employee(1, "AHMAD", "SHABLAKH", "PROGRAMAR", "ADMIN", "aa@gmail.com", "5343541611", 36500);
	Employee.Print();
	Employee.SendEmail("Hi", "How are you?");
	Employee.SendPhone("How are you?");
	system("pause>0");
	return 0;
}