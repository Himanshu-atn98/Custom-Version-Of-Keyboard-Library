#include<iostream>
using namespace std;
class TV
{
private:
int p;
public:
void askInformation()
{
cout<<"Enter price of TV:";
cin>>p;
}
void printInformation()
{
cout<<"Price of TV:"<<p<<endl;
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
cout<<"Enter price of Fridge:";
cin>>p;
}
void printInformation()
{
cout<<"Price of fridge:"<<p<<endl;
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
int getDifferenceCost(TV &a,Fridge &b)
{
return (a.p-b.p<0)?b.p-a.p:a.p-b.p;
}
int compareCost(TV &a,Fridge &b)
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
cout<<"Total cost of TV and Fridge is:"<<u.getTotalCost(t,f)<<endl;
if(u.compareCost(t,f)==0)
{
cout<<"Cost of TV and Fridge is same"<<endl;
}
else // else start

{

if(u.compareCost(t,f)<0) 
{
cout<<"Cost of Fridge is more than that of TV by:"<<u.getDifferenceCost(t,f)<<endl;
}
else
{
if(u.compareCost(t,f)>0)
{
cout<<"Cost of TV is more than that of Fridge by:"<<u.getDifferenceCost(t,f)<<endl;
}
}

} //else end
return 0;
}