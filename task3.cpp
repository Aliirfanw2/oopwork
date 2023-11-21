#include"task3.h"
#include <cstring>

name::name(char* first, char* last)
{
	int s = strlen(first);
	firstname = new char[s + 1];
	for (int i = 0; i < s; i++)
	{
		firstname[i] = first[i];
	}
	firstname[s] = '\0';

	int s1 = strlen(last);
	secondname = new char[s1 + 1];
	for (int i = 0; i < s1; i++)
	{
		secondname[i] = last[i];
	}
	secondname[s1] = '\0';
}


name::name(const name& obj)
{

	int s = strlen(obj.firstname);
	firstname = new char[s + 1];
	for (int i = 0; i < s; i++)
	{
		firstname[i] = obj.firstname[i];
	}
	firstname[s] = '\0';

	int s1 = strlen(obj.secondname);
	secondname = new char[s1 + 1];
	for (int i = 0; i < s1; i++)
	{
		secondname[i] = obj.secondname[i];
	}
	secondname[s1] = '\0';

}

void name::copyname(name& obj)
{

	int s = strlen(obj.firstname);
	firstname = new char[s + 1];
	for (int i = 0; i < s; i++)
	{
		firstname[i] = obj.firstname[i];
	}
	firstname[s] = '\0';

	int s1 = strlen(obj.secondname);
	secondname = new char[s1 + 1];
	for (int i = 0; i < s1; i++)
	{
		secondname[i] = obj.secondname[i];
	}
	secondname[s1] = '\0';

}


void name::camalcase() {
	if (firstname[0] >= 'a' && firstname[0] <= 'z') {
		firstname[0] = firstname[0] - int('a' - 'A');
	}
	if (secondname[0] >= 'a' && secondname[0] <= 'z') {
		secondname[0] = secondname[0] - int('a' - 'A');

	}
}

void name::tolower() {
	int size = 0;

	size = strlen(firstname);

	for (int i = 0; i < size; i++)
	{
		if (firstname[i] >= 'A' && firstname[i] <= 'Z')
		{
			firstname[i] = firstname[i] + int('a' - 'A');
		}
	}
	size = strlen(secondname);
	while (secondname[size] != '\0')
	{
		size++;
	}
	for (int i = 0; i < size; i++)
	{
		if (secondname[i] >= 'A' && secondname[i] <= 'Z')
		{
			secondname[i] = secondname[i] + int('a' - 'A');
		}
	}
}

void name::toupper()
{
	int size;
	size = strlen(firstname);
	for (int i = 0; i < size; i++)
	{
		if (firstname[i] >= 'a' && firstname[i] <= 'z')
		{
			firstname[i] = firstname[i] - int('a' - 'A');
		}
	}
	size;
	size = strlen(secondname);
	for (int i = 0; i < size; i++)
	{
		if (secondname[i] >= 'a' && secondname[i] <= 'z')
		{
			secondname[i] = secondname[i] - int('a' - 'A');
		}
	}
}
int name::namelength() {

	int size;
	size = strlen(firstname);

	int size2;
	size2 = strlen(secondname);
	size = size + size2;
	cout << "The size is: " << size << endl;
	return size;
}
void name::swapname()
{
	int size;
	size = strlen(firstname);
	int size2 = strlen(secondname);
	char* temp;
	temp = new char[size + 1];
	for (int i = 0; i <= size; i++) {

		temp[i] = firstname[i];

	}


	setfirstname(secondname);
	setsecondname(temp);
	cout << "the names have been swapped sucessfully:" << endl;
}
char* name::fullname()
{
	int size;
	size = strlen(firstname);
	int size2;
	size2 = strlen(secondname);
	char* arr = new char[size + size2 + 2];
	for (int i = 0; i <= (size + size2 + 1); i++)
	{
		if (i < size)
		{
			arr[i] = firstname[i];
		}
		if (i == size)
		{
			arr[size] = ' ';
		}
		if (i > size && i < (size2 + size + 1))
		{
			arr[i] = secondname[(i - size) - 1];
		}
		if (i == (size2 + size + 1))
		{
			arr[i] = '\0';
		}
	}
	return arr;
}
void name::display()
{
	cout << firstname << " " << secondname << endl;
}


bool name::isvalidname()
{



}


name::~name()
{

	cout << "distructor call GOOD BYE!!...\n";
	delete[] firstname;
	delete[] secondname;
}


