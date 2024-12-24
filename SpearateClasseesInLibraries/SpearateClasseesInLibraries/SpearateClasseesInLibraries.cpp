#include<iostream>
#include"clsEmployee.h";
using namespace std;


int main()
{

	clsDeveloper Devloper1(10, "AHMAD", "SHABLAKH", "ahmadshablakh.swi@gmail.com", "5343541611", "SEO", "Acconting", 6525, "C++");
	Devloper1.Print();
	Devloper1.SendSMS("Heloo:)");

	return 0;
}