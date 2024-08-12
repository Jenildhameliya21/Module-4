//2. Write a program of Addition, Subtraction, Division, Multiplication using constructor. 
#include<iostream>
using namespace std;
class Cal
{
	public :
	Cal(int a,int b)
	{
		cout<<"\n The Addition is : "<<a+b;
		cout<<"\n The Subtraction is : "<<a-b;
		cout<<"\n The Multiplication is : "<<a*b;
		cout<<"\n The Division is : "<<a/b;
	}
};
int main()
{
	int a,b;
	cout<<"\n Enter Number 1 : ";
	cin>>a;
	cout<<"\n Enter Number 2 : ";
	cin>>b;
	Cal c1(a,b);
	return 0;
}
