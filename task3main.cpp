
#include"task3.h"

int main()
{
	char first[50];
	char last[50];
	cout << "Enter the fistname" << endl;
	cin.ignore(1, '\n');
	cin.getline(first, 50);
	cout << "Enter the last" << endl;
	cin.ignore(1, '\n');
	cin.getline(last, 50);
	name obj(first, last);
	obj.display();
	//copy constructor
	name obj1 = obj;
	obj1.copyname(obj);
	obj1.camalcase();

	obj.camalcase();
	obj.tolower();
	obj.toupper();
	obj.namelength();
	obj.swapname();
	obj.getfirstname();
	obj.getsecondname();
	obj1.display();




	return 0;
}