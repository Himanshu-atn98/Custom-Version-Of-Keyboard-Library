
#include<iostream>
using namespace std;
class TV
{
//public:
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
//public:
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
int main()
{
TV t;
t.askInformation();
Fridge f;
f.askInformation();
//t.printInformation();
//f.printInformation();
cout<<"Total cost of TV and Fridge is:"<<t.p+f.p<<endl;// This line won't compile if p is declared private within the classes.
return 0;
}