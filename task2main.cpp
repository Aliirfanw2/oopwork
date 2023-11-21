#include"task2.h"
using namespace std;


int main1()
{
	//Making Object
	MyChar obj;
	char  num1;
	int size;
	char chr;
	cout << "ENter the value who want to store MyNum :" << endl;
	cin >> num1;
	obj.setchar(num1);
	obj.getchar();
	obj.display();

	cout << "Enter the size who want to store number" << endl;
	cin >> size;


	MyChar* n = new MyChar[size];
	for (int i = 0; i < size; i++)
	{
		cout << "Enter the value " << i << ":";
		cin >> num1;
		n[i].setchar(num1);
	}

	cout << "do yo want to perform Function Upercase or Lowercase PRESS y other wise n" << endl;
	cin >> chr;
	while (chr == 'y' || chr == 'Y')
	{
		int n1;
		cout << "Enter the index value you wo want to perform function" << endl;
		cin >> n1;
		cout << "What do you want to perform funtion Uper case pres U or Lower case press L:" << endl;
		cin >> chr;
		if (chr == 'u' || chr == 'U')
		{
			n[n1].Mychar();
		}
		if (chr == 'l' || chr == 'L')
		{
			n[n1].MyNum();
		}
	}


	for (int i = 0; i < size; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (n[i].getchar() > n[j].getchar())
			{
				char temp = n[i].getchar();
				n[i].setchar(n[j].getchar());
				n[j].setchar(temp);
			}
		}
	}

	cout << "After Acsending  Sorting Value:" << endl;
	for (int i = 0; i < size; i++)
	{
		n[i].display();

	}





	return 0;
}