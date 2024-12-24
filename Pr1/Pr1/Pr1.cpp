#include<iostream>
#include<string>
using namespace std;

class clPrson
{
public:
	string Fulname;
	short Agee;
	string FullPersonDat()
	{
		return Fulname + " " + to_string(Agee);
	}
};

int main()
{
	clPrson Peron1;
	Peron1.Fulname = "Ahmad Shablakh";
	Peron1.Agee = 22;

	cout << Peron1.FullPersonDat() << endl;
}