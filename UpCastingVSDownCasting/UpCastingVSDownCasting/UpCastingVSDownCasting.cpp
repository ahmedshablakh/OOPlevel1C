#include<iostream>
using namespace std;
class clPrson
{
private:
	int _ID;
	string _FirstName;
	string _LastName;
	string _Email;
	string _Phone;

public:

	clPrson()
	{
		_ID = 15;
		_FirstName = "FirstName";
		_LastName = "LastName";
		_Email = "Email";
		_Phone = "Phone";
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

class clsEmployee : public clPrson
{
private:
	string 	_Title;
	string _Department;
	float	_Salary;

public:
	clsEmployee()
	{
		_Title = "Title";
		_Department = "Department";
		_Salary = 858;
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

	clsDeveloper()
		:clsEmployee()
	{
		_MainProgrammingLanguage = "MainProgrammingLanguage";

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
int main()
{


	clsDeveloper Devloper;

	clPrson * Person1 = &Devloper;
	Person1->SendEmail("Hi", "Hello");


	
}