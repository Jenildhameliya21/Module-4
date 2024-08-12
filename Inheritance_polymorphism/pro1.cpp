//1. Assume a class cricketer is declared. Declare a derived class batsman from 
//cricketer. Data member of batsman. Total runs, Average runs and best 
//performance. Member functions input data, calculate average runs, Display 
//data. (Single Inheritance)
#include<iostream>
using namespace std;
class Cricketer
{
	public :
		string name;
		void inputnm()
		{
			cout<<"\n Enter Cricketer Name : ";
			cin>>name;
		}
};
class Batsman:public Cricketer
{
	public :
	int totrun,avgrun,bstperfom,match;
	void input()
	{	
		cout<<"\n Enter Total Match : ";
		cin>>match;
		cout<<"\n Enter Total Runs : ";
		cin>>totrun;
		cout<<"\n Enter Cricketer Best Performance : ";
		cin>>bstperfom;
	}
	void cal_avg()
	{
		avgrun=totrun/match;
	}
	void display()
	{
		cout<<"\n Cricketer Name is : "<<name;
		cout<<"\n Cricketer Total Match is : "<<match;
		cout<<"\n Cricketer Total Run is : "<<totrun;
		cout<<"\n Cricketer Best Performance is : "<<bstperfom;
		cout<<"\n Cricketer Average Run is : "<<avgrun;
	}
};
int main()
{
	Batsman b1;
	b1.inputnm();
	b1.input();
	b1.cal_avg();
	b1.display();
	return 0;
}
