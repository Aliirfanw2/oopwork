#include"task2.h"



void MyChar::setchar(char x)
{
	a = x;
}
char MyChar::getchar()
{
	return a;
}
void MyChar::display()
{

	cout << "Your Value:" << a << endl;

}
void MyChar::Mychar()
{
	if (a >= 'a' && a <= 'z')
	{
		a = a - 32;
		cout << "Upercase:" << a << endl;
	}
	else
	{
		cout << "Your Character allready Upercase:" << endl;
	}
}


void MyChar::MyNum()
{
	if (a >= 'A' && a <= 'Z')
	{
		a = a + 32;
		cout << "Lowercase:" << a << endl;

	}
	else
	{
		cout << "Your character allreay Lower case:" << endl;
	}

}


MyChar::MyChar(char x)
{
	a = x;
}

MyChar::~MyChar()
{
	cout << "Distructor call Good BYE!!..." << endl;
}