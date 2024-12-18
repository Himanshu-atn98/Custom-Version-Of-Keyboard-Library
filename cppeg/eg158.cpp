#include<iostream>
using namespace std;
int main()
{
int x,y,q,r;
cout<<"Enter Dividend:";
cin>>x;
cout<<"Enter Divisor:";
cin>>y;
try
{
if(y==0)
{
throw y;
}
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
cout<<y<<" is not factor of "<<x<<endl;
cout<<y<<"x"<<q<<"+"<<r<<"="<<x<<endl;
}
}catch(int e)
{
cout<<"*****Exception raised*****"<<endl;
cout<<"Divisor can not be "<<y<<endl;
}
return 0;
}