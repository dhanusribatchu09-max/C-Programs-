#include<iostream>
using namespace std;

class complex
{
	public:
		int real;
		int imag;
		
		//constructor
		Complex(int r = 0,int i = 0)
		{
			real = r;
			imag = i;
		}
		
		//operator overloading
		complex operator + (complex c)
		{
			complex temp;
			
			temp.real = real + c.real;
			temp.imag = imag + c.imag;
			
			return temp;
		}
		void display()
		{
			cout << real << " + " << imag << "i" << endl;
		}
};

int main()
{
	complex c1(3, 4);
	complex c2(5, 6);
	complex c3;
	
	c3 = c1 + c2;
	
	cout << "First complex number ="
	     << c1.real << " + " << c1.imag << "i" << endl;
	
	cout << "second complex number = "
	     << c2.real << " + " << c2.imag << "i" << endl;
	     
	cout << "Addtion = "
	     << c3.real << " + " << c3.imag << "i";
	     
	return 0;
}