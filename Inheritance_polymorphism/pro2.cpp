//2. Write a C++ Program to find Area of Rectangle using inheritance.
#include<iostream>
using namespace std;
class Rectangle
{
	public :
		int l,w;
			Rectangle()
			{
				cout<<"\n Enter Lenght : ";
				cin>>l;
				cout<<"\n Entre Width : ";
				cin>>w;
			}
};
class Display:public Rectangle
{
	public :
		Display()
		{
			cout<<"\n Area of Rectangle is :"<<l*w;
		}	
};
int main()
{
	Display d1;
	return 0;
}
