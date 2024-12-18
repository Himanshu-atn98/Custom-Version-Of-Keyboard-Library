#include<iostream>
using namespace std;
int main()
{
int x,y;
x=10;
x++;
y=20;
++y;
cout<<"X:"<<x<<endl;
cout<<"Y:"<<y<<endl;
//cout<<"\n"<<"x:"<<x++<<endl<<"y:"<<++y<<endl;
int z=x++;
cout<<"x:"<<x<<endl;
cout<<"z:"<<z<<endl;
int p;
p=++y;
cout<<"y:"<<y<<endl;
cout<<"p:"<<p<<endl;
return 0;
}