#include<iostream>
using namespace std;
int main()
{
int x[10],y,t;
for(y=0;y<=9;y++)
{
cout<<"Enter a number:";
cin>>x[y];
}
for(y=0,t=0;y<=9;y++)
{

t+=x[y];
}
cout<<"Total is:"<<t<<endl;
return 0;
}