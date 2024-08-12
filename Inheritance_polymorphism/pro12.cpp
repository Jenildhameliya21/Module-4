//12. Write a program to swap the two numbers using friend function without using third variable.
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
		int temp;
			temp=s.a;
			s.a=s.b;
			s.b=temp;
			cout<<"\n After Swap A = "<<s.a;
			cout<<"\n After Swap B = "<<s.b;
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

