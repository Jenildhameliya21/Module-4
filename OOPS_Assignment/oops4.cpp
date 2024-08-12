//4. Write a C++ program to implement a class called Circle that has private 
//member variables for radius. Include member functions to calculate the 
//circle's area and circumference.
#include<iostream>
using namespace std;
class Circle
{
	int radius,a,c;
	public :
		void calc(int radius)
		{
			a=3.14*(radius*radius);
			cout<<"\n Area of Circle : "<<a;
			c=2*3.14*radius;
			cout<<"\n circumference of Circle : "<<c;
		}	
};
int main()
{
	int radius;
	cout<<"\n Enter Radius : ";
	cin>>radius;
	Circle c1;
	c1.calc(radius);
	return 0;
}
