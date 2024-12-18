#include<iostream>
using namespace std;
int main()
{
int x;
int &y=x;
y=20;
cout<<"X:"<<x<<endl;
cout<<"Value of x through reference variable y:"<<y<<endl;
x=100;
cout<<x<<"\n"<<y<<endl;
return 0;
}