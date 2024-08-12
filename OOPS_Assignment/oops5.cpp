//5. Write a C++ program to create a class called Rectangle that has private 
//member variables for length and width. Implement member functions to 
//calculate the rectangle's area and perimeter. 
#include<iostream>
using namespace std;
class Ractangle
{
	int l,w;
	public:
	void setdata(int l,int w)
	{
		this->l=l;
		this->w=w;
	}
	void area()
	{
		cout<<"\n Rectangle Area is"<<l*w;
	}
	void perimeter()
	{
		cout<<"\n perimeter of rectangle is : "<<2*(l+w);
	}
};
int main()
{
	Ractangle r1;
	int l,w;
	cout<<"\n Enter Length : ";
	cin>>l;
	cout<<"\n Enter Width : ";
	cin>>w;
	r1.setdata(l,w);
	r1.area();
	r1.perimeter();
	return 0;
}
