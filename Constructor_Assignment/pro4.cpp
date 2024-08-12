//4. Write a C++ program to implement a class called Bank Account that has 
//private member variables for account number and balance. Include 
//member functions to deposit and withdraw money from the account. 
#include<iostream>
using namespace std;
class Bankacc
{
	double accno,deposite;
	long balance;	
	public :
		void assign_value(double acc,long bal)
		{
			accno=acc;
			balance=bal;
		}
		void display()
		{
			cout<<"\n Account Number is "<<accno;
			cout<<"\n Account Bank Balance is "<<balance;
		}
		void deposit(double depo)
		{
		   balance=balance+depo;
		   cout<<"\n Account Bank Balance is "<<balance;
		}
		void withdraw(double with)
		{
			balance=balance-with;
		   cout<<"\n Account Bank Balance is "<<balance;
		}
};
int main()
{
	Bankacc b1;//class no object
	double acc,depo,with;
	long bal;
	cout<<"\n Enter Account Number : ";
	cin>>acc;
	cout<<"\n Enter Account Bank Balance : ";
	cin>>bal;
	b1.assign_value(acc,bal);
	cout<<"\n Enter Deposit Amount : ";
	cin>>depo;
	b1.deposit(depo);
	cout<<"\n Enter Withdraw Amount : ";
	cin>>with;
	b1.withdraw(with);
	b1.display();
	return 0;
}
