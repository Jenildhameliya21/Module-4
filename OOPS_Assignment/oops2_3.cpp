//2. Define a class to represent a bank account. Include the following members: 
//3. Data Member: 
// -Name of the depositor
// -Account Number 
// -Type of Account 
// -Balance amount in the account
//   -Member Functions
//-To assign values 
//-To deposited an amount 
//-To withdraw an amount after checking balance 
//-To display name and balance
#include<iostream>
using namespace std;
class Bankacc
{
	string name,typeacc;
	double accno,deposite;
	long balance;	
	public :
		void assign_value(string nm,string typ,double acc,long bal)
		{
			name=nm;
			typeacc=typ;
			accno=acc;
			balance=bal;
		}
		void display()
		{
			cout<<"\n Name is "<<name;
			cout<<"\n Accoutn Type is "<<typeacc;
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
	string nm,typ;
	double acc,depo,with;
	long bal;
	cout<<"\n Enter Name : ";
	cin>>nm;
	cout<<"\n Enter Account Type : ";
	cin>>typ;
	cout<<"\n Enter Account Number : ";
	cin>>acc;
	cout<<"\n Enter Account Bank Balance : ";
	cin>>bal;
	b1.assign_value(nm,typ,acc,bal);
	cout<<"\n Enter Deposit Amount : ";
	cin>>depo;
	b1.deposit(depo);
	cout<<"\n Enter Withdraw Amount : ";
	cin>>with;
	b1.withdraw(with);
	b1.display();
	return 0;
}
