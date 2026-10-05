#include<iostream>
using namespace std;
class Counter
{
	public:
	int count;
	counter()
	{
		count=15;
	}
	void operator ++()
	{
		count++;
	}
	void display()
	{
		cout<<"value of count is: " <<count<<endl;
	}
};
main()
{
	counter c;
	c.display();
	++c
	cout<<"after incrementing:"<<end1;
	c.display();
}