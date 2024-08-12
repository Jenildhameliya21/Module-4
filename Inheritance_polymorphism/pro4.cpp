//4. Write a C++ Program display Student Mark sheet using Multiple inheritance .
#include<iostream>
using namespace std;
class Student
{
	public :
		int rollno;
		string name;
		Student()
		{
			cout<<"\n Entre Student Name : ";
			cin>>name;
			cout<<"\n Enter Student Roll Number : ";
			cin>>rollno;
		}
};
class Mark
{
	public :
		int m1,m2,m3,m4,tot;
		Mark()
		{
			cout<<"\n Enter Sanskrit Subject Mark : ";
			cin>>m1;
			cout<<"\n Enter Gujrati Subject Mark : ";
			cin>>m2;
			cout<<"\n Enter Hindi Subject Mark : ";
			cin>>m3;
			cout<<"\n Enter Kathiyavadi Subject Mark : ";
			cin>>m4;
			tot=m1+m2+m3+m4;
		}
};
class Marksheet:public Student , public Mark
{
	public :
		Marksheet()
		{
			cout<<"\n Student Name is : "<<name;
			cout<<"\n Student Roll Number is : "<<rollno;
			cout<<"\n Student Percentage is : "<<(tot*100)/400;
		}
};
int main()
{
	Marksheet m1;
	return 0;
}
