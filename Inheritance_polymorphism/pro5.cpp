//5. Assume that the test results of a batch of students are stored in three different 
//classes. Class Students are storing the roll number. Class Test stores the 
//marks obtained in two subjects and class result contains the total marks 
//obtained in the test. The class result can inherit the details of the marks 
//obtained in the test and roll number of students. (Multilevel Inheritance).
#include<iostream>
using namespace std;
class Student 
{
	public :
		int rollno;	
			Student()
			{
				cout<<"\n Enter Student Roll Number : ";
				cin>>rollno;
			}
};
class Test:public Student
{
	public :
		int m1,m2,tot;
			Test()
			{
				cout<<"\n Enter Subject 1 Mark : ";
				cin>>m1;	
				cout<<"\n Enter Subject 2 Mark : ";
				cin>>m2;
				tot=m1+m2;	
			}	
};
class Marksheet:public Test
{
	public :
		Marksheet()
		{
	    	cout<<"\n Student Roll Number is : "<<rollno;
			cout<<"\n Student Percentage is : "<<(tot*100)/200;		
	    } 	
};
int main()
{	
	Marksheet m1;
	return 0;
}
