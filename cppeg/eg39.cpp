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
cout<<"Price of Fridge:"<<p<<endl;
}
};
int getTotalCost(Tv &a,Fridge &b)
{
return a.p+b.p;
}
int main()
{
TV t;
t.askInformation();
Fridge f;
f.askInformation();
cout<<"Total cost of TV and Fridge is:"<<getTotalCost(t,f)<<endl;
return 0;
}