#include<iostream>
using namespace std;

int x = 100;

int main()
{
	int x = 50;
	
	cout << "local x = " << x ;
	cout << "global x = " << ::x ;
	
	return 0;
}