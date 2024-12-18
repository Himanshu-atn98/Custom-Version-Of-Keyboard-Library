#include<iostream>
using namespace std;
int main()
{
int x,y,q,r;
cout<<"Enter Diviend:";
cin>>x;
cout<<"Enter Divisor:";
cin>>y;
if(y!=0)
{
q=x/y;
r=x%y;
cout<<"Quotient:"<<q<<endl;
cout<<"Remainder:"<<r<<endl;
if(r==0)
{
cout<<y<<" is factor of "<<x<<endl;
cout<<y<<"x"<<q<<"="<<x<<endl;
}
else
{
cout<<y<<" is not a factor of "<<x<<endl;
cout<<y<<"x"<<q<<"+"<<r<<"="<<x<<endl;
}
}
else
{
cout<<"Divisor can not be "<<y<<endl;
}
return 0;
}