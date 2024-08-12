//5. Write a C++ program to create a class called Triangle that has private 
//member variables for the lengths of its three sides. Implement member 
//functions to determine if the triangle is equilateral, isosceles, or scalene. 
#include<iostream>
using namespace std;
class Triangle
{
	private :
		int side1,side2,side3;
		public :
			void display()
			{
				cout<<"\n Enter Side 1 : ";
				cin>>side1;
				cout<<"\n Enter Side 2 : ";
				cin>>side2;
				cout<<"\n Enter Side 3 : ";
				cin>>side3;
				if(side1==side2 && side1==side3)
				{
					cout<<"\n Triangle is Equilateral...";
				}
				else if(side1==side2 || side1==side3 || side2==side3)
				{
					cout<<"\n Triangle is Isosceles...";
				}
				else
				{
					cout<<"\n Triangle is scalene...";
				}
				
			}
};
int main()
{
	Triangle t1;
	t1.display();
	return 0;
}
