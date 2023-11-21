#include"task1.h"


MyNum::MyNum(int x)
{
	num = x;
}

void MyNum::setNum(int n)
{
	num = n;
}
int MyNum::getNum()
{
	return num;
}
void MyNum::display()
{
	cout << "Your Value you store in Num:" << num << endl;


}

void MyNum::psitiveNum()
{

	if (num < 0)
	{
		num = -num;
		cout << "FUNCTION CHANGE POSITIVE NUMBER:" << num << endl;
	}
	else
	{
		cout << "Your number allready Positive:" << num << endl;
	}
}
void MyNum::negativeNum()
{
	if (num >= 0)
	{
		num = -num;
		cout << "FUNCTION CHANGE NEGITIVE NUMBER:" << num << endl;
	}
	else
	{
		cout << "Your number allready Negitive number:" << num << endl;
	}
}

MyNum::~MyNum()
{
	
}