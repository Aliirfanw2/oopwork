#include"task1.h"

int main0()
{
	//Making Object
	MyNum obj;
	int  num1, size;
	char chr;
	cout << "ENter the value who want to store MyNum :" << endl;
	cin >> num1;
	obj.setNum(num1);
	obj.getNum();
	obj.display();

	cout << "Enter the size who want to store number" << endl;
	cin >> size;
	MyNum* n = new MyNum[size];
	for (int i = 1; i <= size; i++)
	{
		cout << "Enter the value " << i << ":";
		cin >> num1;
		n[i].setNum(num1);
	}

	cout << "do yo want to perform Function positive or negitive PRESS y other wise n" << endl;
	cin >> chr;
	while (chr == 'y' || chr == 'Y')
	{
		int n1;
		cout << "Enter the index value you wo want to perform function" << endl;
		cin >> n1;
		cout << "What do you want to perform funtion positive pres p or negitive press n:" << endl;
		cin >> chr;
		if (chr == 'p' || chr == 'P')
		{
			n[n1].psitiveNum();
		}
		if (chr == 'n' || chr == 'N')
		{
			n[n1].negativeNum();
		}
	}

	for (int i = 0; i < size; i++)
	{
		for (int j = i; j < size; j++)
		{
			if (n[i].getNum() > n[j].getNum())
			{
				int temp=n[i].getNum();
				n[i].setNum(n[j].getNum());
				n[j].setNum(temp);
			}
		}

	}
	cout << "After Sorting Value:" << endl;
	for (int i = 0; i < size; i++)
	{
		n[i].display();

	}


	//delete dinamic object
	delete[] n;


	return 0;
}