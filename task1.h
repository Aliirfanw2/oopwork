#include<iostream>
using namespace std;


class MyNum {

private:
	int num;

public:

	void setNum(int);
	int getNum();
	void psitiveNum();
	void negativeNum();
	void display();


	MyNum(int x = 9);
	~MyNum();


};