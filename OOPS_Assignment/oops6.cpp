//6. Write a C++ program to create a class called Person that has private 
//member variables for name, age and country. Implement member 
//functions to set and get the values of these variables. 
#include<iostream>
using namespace std;
class Person
{
	private :
		int age;
		string name,country;
	public : 
		void setdata(int age,string name,string country)
		{
			this->age=age;
			this->name=name;
			this->country=country;
		}
		void getdata()
		{
			cout<<"\n Name is : "<<name;
			cout<<"\n Age is : "<<age;
			cout<<"\n Country is : "<<country;
		}
};
int main()
{
	string name,country;
	int age;
	Person p1;
	cout<<"\n Enter Name : ";
	cin>>name;
	cout<<"\n Enter Country : ";
	cin>>country;
	cout<<"\n Enter Age : ";
	cin>>age;
	p1.setdata(age,name,country);
	p1.getdata();
	return 0;
}
