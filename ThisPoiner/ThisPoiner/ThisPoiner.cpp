#include<iostream>
using namespace std;

class Employee
{
private:
	int ID;
	string Name;
	float Salary;
public:
	Employee(int ID, string Name, float Salary)
	{
		this->ID = ID;
		this->Name = Name;
		this->Salary = Salary;
	}
	static void Func1(Employee Emp)
	{
		Emp.Print();
	} 
	void Func2()
	{
		Func1(*this);
	}


	void Print()
	{
		cout << ID << "  " << Name << "  " << Salary << endl;
		// cout << this->ID << " " << this->Name << " " << this->Salary << endl;
	}

};

int main()
{
	Employee Emp(101,"Ahmad",5906);
	Emp.Print();
	Emp.Func2();


	return 0;
}