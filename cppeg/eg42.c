#include<iostream>
using namespace std;
class TV
{
private:
int p;
public:
void askInformation()
{
cout<<"Enter the price of TV:";
cin>>p;
}
int printInformation()
{
cout<<"Price of TV is:"<<p<<endl;
}
friend class Utility;
};
class Fridge
{
private:
int p;
public:
void askInformation()
{
cout<<"Enter the price of Fridge:";
cin>>p;
}
int printInformation()
{
cout<<"Price of Fridge is:"<<p<<endl;
}
friend class Utility;
};

class Utility
{
public:
int getTotalCost(TV &a,Fridge &b)
{
return a.p+b.p;
}
int getDifferenceInCost(TV &a,Fridge &b)
{
cout<<"HIMANSHU"<<endl;
//return (a.p-b.p<0)?b.p-a.p:a.p-b.p;
return (a.p-b.p>0)?a.p-b.p:b.p-a.p; 
}int compareCost(TV &a,Fridge &b)
{
return a.p-b.p;
}
};
 int main()
{
TV t;
t.askInformation();
Fridge f;
f.askInformation();
Utility u;
cout<<"Total cost of TV and Fridge is: " <<u.getTotalCost(t,f)<<endl;
if(u.compareCost(t,f)==0)
{
cout<<"Cost of TV and Fridge is same"<<endl;
}
else
{
if(u.compareCost(t,f)<0)
{
cout<<"Cost of Fridge is more than that of TV by "<<u.getDifferenceInCost(t,f)<<endl;
}
else
{
if(u.compareCost(t,f)>0)
{
cout<<"Cost of TV is more than that of Fridge by "<<u.getDifferenceInCost(t,f)<<endl;
}
}
}
return 0;
}