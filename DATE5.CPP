#include<iostream>
using namespace std;
struct date
    {int day;
    int month;
    int year;
    };
int main()
{

     date d1, d2, d;
     cout<<"Enter date from which you want to substract the other date in format (DD MM YYYY) : \n";
     cin>>d1.day>>d1.month>>d1.year;
     cout<<"Enter the other date in (DD MM YYYY) : \n";
     cin>>d2.day>>d2.month>>d2.year;
     if(d1.day>=d2.day)
	    d.day=d1.day-d2.day;
	else
	   {if(d1.month==1||d1.month==3||d1.month==5||d1.month==7||d1.month==8||d1.month==10||d1.month==12)
	      {d.day=(d1.day+31)-d2.day;
	      d1.month=d1.month-1;}
	   else
	      {if(d1.month==4||d1.month==6||d1.month==9||d1.month==11)
		  { d.day=(d1.day+30)-d2.day;
		  d1.month=d1.month-1;}
		else
		  {if(d1.month==2)
		   {if(d1.year/4)
		      d.day=(d1.day+29)-d2.day;
		    else
		      d.day=(d1.day+28)-d2.day;}}
	      }}

if(d1.month>=d2.month)
  d.month=d1.month-d2.month;
else
  {d.month=(d1.month+12)-d2.month;
  d1.year=d1.year-1;
  }
d.year=d1.year-d2.year;
cout<<"The difference between two dates is: ";
cout<<d.day<<" Days "<<d.month<<" Month "<<d.year<<" Year ";


return 0;

}