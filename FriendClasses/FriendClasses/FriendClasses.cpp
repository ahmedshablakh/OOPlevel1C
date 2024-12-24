#include<iostream>
using namespace std;

class claA
{
private:
	int x = 10;
public:
	int Y = 120;

	friend class claB;
};


class claB 
{
public:
	void display(claA a1)
	{
		
		cout << a1.x << endl;
	}
};
int main()
{
	claA a1;
	claB B;
	B.display(a1);

	return 0 ;
}