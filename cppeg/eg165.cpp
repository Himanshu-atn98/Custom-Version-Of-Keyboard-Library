#include<iostream>
#include<ctime>
#include<string.h>
#include<stdio.h>
using namespace std;
class Date
{
private:
int day,month,year;
int hour,minute,second;
int dayOfWeek;
int dayOfYear;
char shortMonth[12][4];
char longMonth[12][10];
char shortWeekDay[7][4];
char longWeekDay[7][10];

Date(int year,int month,int day,int dayOfWeek,int dayOfYear,int hour=0,int minute=0,int second=0)

{
setupStrings();
this->year=year;
this->month=month;
this->day=day;
this->hour=hour;
this->minute=minute;
this->second=second;
this->dayOfWeek=dayOfWeek;
this->dayOfYear=dayOfYear;
}
void setupStrings();
public:
Date()
{
//setupString
time_t t=time(0);
struct tm *now=localtime(&t);
day=now->tm_mday;
month=now->tm_mon+1;
year=now->tm_year+1900;
hour=now->tm_hour;
minute=now->tm_min;
second=now->tm_sec;
dayOfWeek=now->tm_wday+1;
dayOfYear=now->tm_yday+1;
}

Date(const Date &other)
{
setupStrings();
this->year=other.year;
this->month=other.month;
this->day=other.day;
this->hour=other.hour;
this->minute=other.minute;
this->second=other.second;
this->dayOfWeek=other.dayOfWeek;
this->dayOfYear=other.dayOfYear;
}

Date & operator=(Date other)
{
this->year=other.year;
this->month=other.month;
this->day=other.day;
this->hour=other.hour;
this->minute=other.minute;
this->second=other.second;
this->dayOfWeek=other.dayOfWeek;
this->dayOfYear=other.dayOfYear;
return *this;
}

void getDateString(char *dateString)
{
sprintf(dateString,"%d/%d/%d",this->day,this->month,this->year);
}
void getTimeString(char *timeString)
{
sprintf(timeString,"%d:%d:%d",this->hour,this->minute,this->second);
}

int getDay()
{
return this->day;
}
int getMonth()
{
return this->month;
}
int getYear()
{
return this->year;
}

int getDayOfWeek()
{
return this->dayOfWeek;
}
int getDayOfYear()
{
return this->dayOfYear;
}

int getHour()
{
return this->hour;
}
int getMinute()
{
return this->minute;
}
int getSecond()
{
return this->second;
}
friend class Calendar;
};

void Date::setupStrings()
{
// setup short month names
strcpy(shortMonth[0],"Jan"); 
strcpy(shortMonth[1],"Feb");
strcpy(shortMonth[2],"Mar");
strcpy(shortMonth[3],"Apr");
strcpy(shortMonth[4],"May");
strcpy(shortMonth[5],"Jun");
strcpy(shortMonth[6],"Jul");
strcpy(shortMonth[7],"Aug");
strcpy(shortMonth[8],"Sep");
strcpy(shortMonth[9],"Oct");
strcpy(shortMonth[10],"Nov");
strcpy(shortMonth[11],"Dec");

//setup short week day names
strcpy(shortWeekDay[0],"Sun");
strcpy(shortWeekDay[1],"Mon");
strcpy(shortWeekDay[2],"Tue");
strcpy(shortWeekDay[3],"Wed");
strcpy(shortWeekDay[4],"Thu");
strcpy(shortWeekDay[5],"Fri");
strcpy(shortWeekDay[6],"Sat");

//setup long month names
strcpy(longMonth[0],"January");
strcpy(longMonth[1],"February");
strcpy(longMonth[2],"March");
strcpy(longMonth[3],"April");
strcpy(longMonth[4],"May");
strcpy(longMonth[5],"June");
strcpy(longMonth[6],"July");
strcpy(longMonth[7],"August");
strcpy(longMonth[8],"September");
strcpy(longMonth[9],"October");
strcpy(longMonth[10],"November");
strcpy(longMonth[11],"December");

//setup long week day names
strcpy(longWeekDay[0],"Sunday");
strcpy(longWeekDay[1],"Mondat");
strcpy(longWeekDay[2],"Tuesday");
strcpy(longWeekDay[3],"Wednesday");
strcpy(longWeekDay[4],"Thursday");
strcpy(longWeekDay[5],"Friday");
strcpy(longWeekDay[6],"Saturday");
}

class Calendar
{
private:
Calendar()
{
}
static int getDayOfYear(int year,int month,int day)
{
int monthDays[12]={31,28,31,30,31,30,31,31,30,31,30,31};
if((year%4==0 && year%100!=0) || year%400==0) monthDays[1]=29;
int x,y;
for(x=0,y=0;x<month-1;x++) 
{
y+=monthDays[x];
}
y+=day;
return y;
}

static int getDayOfWeek(int year,int month,int day)
{
int baseDay=3;// 1-1-1901 was Tuesday(3)
int baseYear=1901;
int monthDays[12]={31,28,31,30,31,30,31,31,30,31,30,31};
int x;
int y=0;
for(x=baseYear;x<year;x++)
{
y+=((x%4==0 && x%100!=0)|| x%400==0)?366:365;
}
if((year%4==0 && year%100!=0) || year%400==0) monthDays[1]=29;
for(x=0;x<month-1;x++) y+=monthDays[x];
y+=day;
int z=((y%7)+2)%7; //if start day of week is tue(3,1-1-1901) then we ends on Mom(2)
return z;
}
public:
static Date getInstance(int year,int month,int day,int hour=0,int minute=0,int second=0)
{
return Date(year,month,day,getDayOfWeek(year,month,day),getDayOfYear(year,month,day),hour,minute,second);
}
};

int main()
{
Date d;
char dateString[21];
char timeString[21];
d.getDateString(dateString);
d.getTimeString(timeString);
cout<<"Now:"<<dateString<<","<<timeString<<endl;
Date date2;
date2=Calendar::getInstance(2087,7,29);
date2.getDateString(dateString);
date2.getTimeString(timeString);
cout<<"\n**************\n"<<endl;
cout<<"Now:"<<dateString<<","<<timeString<<endl;
cout<<"Day of week through date2 object: "<<date2.getDayOfWeek();
return 0;
}