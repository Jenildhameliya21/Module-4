//7. Write a C++ program to implement a class called Date that has private 
//member variables for day, month, and year. Include member functions to 
//set and get these variables, as well as to validate if the date is valid. 
#include<iostream>
using namespace std;
class Date
{
	public :
		int day,month,year;
			Date()
			{
				cout<<"\n Enter Day : ";
				cin>>day;
				cout<<"\n Enter Month : ";
				cin>>month;
				cout<<"\n Enter Year : ";
				cin>>year;
				if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
				{
					if(day<=31)
					{
						cout<<"\n Date is Valid : ";	
					}	
					else
					{
						cout<<"\n Date is Not Valid : ";
					}
				}	
				else if(month==4 || month==6 || month==9 || month==11 )
				{
					if(day<=30)
					{
						cout<<"\n Date is Valid : ";	
					}	
					else
					{
						cout<<"\n Date is Not Valid : ";
					}
				}
				else if(month==2)
				{
				 if	((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
				 {
				 	if(day<=29)
				 	{
						cout<<"\n Date is Valid : ";	
					}	
					else
					{
						cout<<"\n Date is Not Valid : ";
					}
					
				 }
				 else
				 {
				 
				 if(day<=28)
				 	{
						cout<<"\n Date is Valid : ";	
					}	
					else
					{
						cout<<"\n Date is Not Valid : ";
					}
			     }
				}
			}	
};
int main()
{	
	Date d1;
	return 0;
}
