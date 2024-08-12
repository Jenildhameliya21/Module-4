//13. Write a program to find the max number from given two numbers using friend function.
#include<iostream>
using namespace std;
class Swap
{
	int a,b;
	public :
		Swap(int a,int b)
		{
			this->a=a;
			this->b=b;
		}
		friend void display(Swap &s);
};
void display(Swap &s)
{
		if(s.a>s.b)
		cout<<"\n Max is : "<<s.a;
		else
		{
			cout<<"\n Max is : "<<s.b;
		}
}
int main()
{	
	int a,b;
	cout<<"\n Enter A : ";
	cin>>a;
	cout<<"\n Enter B : ";
	cin>>b;		
	Swap s1(a,b);
	display(s1);
	return 0;
}
 
