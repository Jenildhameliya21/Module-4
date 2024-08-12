//3. Create a class person having members name and age. Derive a class student 
//having member percentage. Derive another class teacher having member 
//salary. Write necessary member function to initialize, read and write data. 
//Write also Main function (Multiple Inheritance) .
#include<iostream>
using namespace std;
class Person
{
	public :
		string name;
		int age;
			Person()
			{
				cout<<"\n Enter Name : ";
				cin>>name;
				cout<<"\n Enter Age : ";
				cin>>age;		
			}			
};
class Student
{
	public :
		float per;
			Student()
			{
				cout<<"\n Enter Percentage : ";
				cin>>per;
			}
};
class Teacher:public Person , public Student
{	
	public :
		int sal;
			Teacher()
			{
				cout<<"\n Enter Teacher Salary : ";
				cin>>sal;
			}
			void display()
			{
				cout<<"\n Enter Student Name :"<<name;
				cout<<"\n Enter Student Age :"<<age;
				cout<<"\n Enter Student Percentage :"<<name;
				cout<<"\n Enter Teacher Salary :"<<sal;
			}
};
int main()
{
	Teacher t3;
	t3.display();
}
