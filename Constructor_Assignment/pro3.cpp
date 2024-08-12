//3. Write a C++ program to create a class called Car that has private 
//member variables for company, model, and year. Implement member 
//functions to get and set these variables. 
#include<iostream>
using namespace std;
class Car
{
	private :
		string company,model;
		int year;
	public :
		void setdata(string company,string model,int year)
		{
			this->company=company;
			this->model=model;
			this->year=year;
		}
		void getdata()
		{
			cout<<"\n Company Name is : "<<company;
			cout<<"\n Model Name is : "<<model;
			cout<<"\n Year is : "<<year;
		}
};
int main()
{
	Car c1;
	string company,model;
	int year;
	cout<<"\n Enter Company Name : ";
	cin>>company;
	cout<<"\n Enter Model Name : ";
	cin>>model;
	cout<<"\n Enter Year : ";
	cin>>year;
	c1.setdata( company, model, year);
	c1.getdata();
	return 0;
}
