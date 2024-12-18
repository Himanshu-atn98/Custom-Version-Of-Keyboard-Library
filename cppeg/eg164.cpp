#include<stdio.h>
#include<ctime>
#include<iostream>
using namespace std;
int main()
{
char months[12][4]={"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
char weekDays[7][4]={"Sun","Mon","Tue","Wed","Thu","Fri","Sat"};
time_t t=time(0);
struct tm *now=localtime(&t);
int day=now->tm_mday;

 int month=now->tm_mon+1;
//int month=now->tm_mon; --->Do the practical and write the appropriate theory.

int year=now->tm_year+1900;
int hour=now->tm_hour;
int min=now->tm_min;
int sec=now->tm_sec;

 int weekDay=now->tm_wday+1;
//int weekDay=now->tm_wday;  --->Do the practical and write the appropriate theory.
  
int dayOfYear=now->tm_yday+1;
cout<<"Date & time is:"<<day<<"/"<<month<<"/"<<year<<","<<hour<<":"<<min<<":"<<sec<<endl;
       
 
/*
         //--->Do the practical and write the appropriate theory. 
  
 cout<<"Month in string form:"<<months[month]<<endl;
   cout<<"Week day in string form:"<<weekDays[weekDay]<<endl;
*/

cout<<"Month in string form:"<<months[month-1]<<endl;
cout<<"Week day in string form:"<<weekDays[weekDay-1]<<endl;
 
cout<<"Today is:"<<dayOfYear<<" day of the year"<<endl;
return 0;
}
