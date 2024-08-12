//8. Write a C++ program to implement a class called Student that has private 
//member variables for name, class, roll number, and marks. Include 
//member functions to calculate the grade based on the marks and display 
//the student's information. Accept address from each student implement 
//using of aggregation.
#include<iostream>
using namespace std;
class Student
{
	public :
	int rollno,mark;
	string name,clas;
	char gred;
	
		void getdata()
		{
			cout<<"\n Enter Student Name : ";
			cin>>name;
			cout<<"\n Enter Student Class : ";
			cin>>clas;
			cout<<"\n Enter Student Roll Number : ";
			cin>>rollno;
			cout<<"\n Enter Student Marks : ";
			cin>>mark;
		}
		void gread()
		{
			if(mark>80)
			{
				gred='A';
			}
			else if(mark>60 && mark<=80)
			{
				gred='B';
			}
			else
			{
				gred='C';
			}
		}
		void display()
		{
			cout<<"\n Student Name is : "<<name;
			cout<<"\n Student Class is : "<<clas;
			cout<<"\n Student Roll Number is : "<<rollno;
			cout<<"\n Student Mark is : "<<mark;
			cout<<"\n Student Gred is : "<<gred;
		}
};
int main()
{
	Student s1;
	s1.getdata();
	s1.gread();
	s1.display();
	return 0;
}
