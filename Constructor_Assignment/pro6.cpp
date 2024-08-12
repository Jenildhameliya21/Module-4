//6. Write a C++ program to implement a class called Employee that has 
//private member variables for name, employee ID, and salary. Include 
//member functions to calculate and set salary based on employee 
//performance. Using of constructor
#include<iostream>
using namespace std;
class Employee
{
	private :
		int empid,salary;
		string name;
	public :
		void setdata(int id,int salary,string name)
		{
			this->empid=empid;
			this->salary=salary;
			this->name=name;
		}
		void calculate(float per)
		{
			salary += salary*per/100;
		}
		void display()
		{
			cout<<"\n Employee Id is : "<<empid;
			cout<<"\n Employee Salary is : "<<salary;
			cout<<"\n Employee Name is : "<<name;
		}
};
int main()
{
	Employee e1;
	int empid,salary;
	string name;
	float per;
	cout<<"\n Enter Employee Id : ";
	cin>>empid;
	cout<<"\n Enter Employee Salary : ";
	cin>>salary;
	cout<<"\n Enter Employee Name : ";
	cin>>name;
	cout<<"\n Enter Employee Performence (%) : ";
	cin>>per;
	e1.setdata(empid,salary,name);
	e1.calculate(per);
	e1.display();
	return 0;
}
