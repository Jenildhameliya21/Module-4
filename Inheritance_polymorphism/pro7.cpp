//7. Write a C++ Program to illustrates the use of Constructors in multilevel inheritance. 
#include<iostream>
using namespace std;
class GrandFather
{
	private :
	  int a=10;
	protected :
	   int b=20;
	public :
	  int c=30;
		GrandFather()
		{
			cout<<"\n Grand Father :";
			cout<<"\n A = "<<a;
			cout<<"\n B = "<<b;	
			cout<<"\n C = "<<c;
		}	
};
class Father:public GrandFather
{
	public :
		Father()
		{
			cout<<"\n Father :";
			cout<<"\n B = "<<b;	
			cout<<"\n C = "<<c;
		}		
};
class Child:public Father
{
	public :
		Child()
		{
			cout<<"\n Child :";
			cout<<"\n C = "<<c;
		}
};
int main()
{
	Child c1;
	return 0;
}
