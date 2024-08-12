//8. Write a program to Mathematic operation like Addition, Subtraction, 
//Multiplication, Division Of two number using different parameters and 
//Function Overloading .
#include<iostream>
using namespace std;
class Cal
{
	public:
		void cale(int a,int b)
		{
			cout<<"\n Addition is :"<<a+b;
		}
		void cale(double c,int d)
		{
			cout<<"\n Subtraction is :"<<c-d;
		}
		void cale(long e,int f)
		{
			cout<<"\n Multiplication is :"<<e*f;
		}
		void cale(float g,int h)
		{
			cout<<"\n Division is :"<<g/h;
		}
};
int main()
{
	Cal c1;
	int a,b,d,f,h;
	double c;
	long e;
	float g;
	cout<<"\n Enter Number 1 : ";
	cin>>a;
	cout<<"\n Enter Number 2 : ";
	cin>>b;
	c=a;
	d=b;
	e=a;
	f=b;
	g=a;
	h=b;
	c1.cale(a,b);
	c1.cale(c,d);
	c1.cale(e,f);
	c1.cale(g,h);
	return 0;
}
