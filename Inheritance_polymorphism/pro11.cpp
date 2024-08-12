//11. Write a program to calculate the area of circle, rectangle and triangle 
//using Function Overloading 
//Rectangle: Area * breadth 
//Triangle: ½ *Area* breadth 
//Circle: Pi * Area *Area.


#include<iostream>
using namespace std;
class Calc
{
	public :
		void shape(string name,int a,int b,int c)//triangle
		{
			cout<<"\n shape=" <<name<<" "<<"area = "<<a+b+c;
		}
		void shape(string name,double r)//circle
		{
			cout<<"\n shape="<<name<<" "<<"area = "<<3.14*(r*r);
		}
		void shape(string name,int x,int y)//rectangle
		{
			cout<<"\n shape="<<name<<" "<<"area = "<<x*y;
		}
};
int main()
{
	int l,w,t1,t2,t3;
	float r1;
	Calc s1;
	cout<<"\n Enter Tringle Detail : ";
	cout<<"\n";
	cout<<"\n Enter side 1 :";
	cin>>t1;
	cout<<"\n Enter side 2 :";
	cin>>t2;
	cout<<"\n Enter side 3 :";
	cin>>t3;
	s1.shape("Triangle",t1,t2,t3);
	cout<<"\n";
	cout<<"\n Enter Circle Detail : ";
	cout<<"\n";
	cout<<"\n Enter Radius  :";
	cin>>r1;
	Calc s2;
	s2.shape("circle",r1);
	cout<<"\n";
	cout<<"\n Enter Ractengle Detail : ";
	cout<<"\n";
	cout<<"\n Enter length :";
	cin>>l;
	cout<<"\n Enter width :";
	cin>>w;
	Calc s3;
	s3.shape("Rectangle",l,w);
	return 0;
}
