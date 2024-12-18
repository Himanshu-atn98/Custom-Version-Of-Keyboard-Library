#include<iostream>
using namespace std;
void divide(int dividend,int divisor,int &quotient,int &remainder)
{
if(divisor==0)
{
throw divisor;
}
quotient=dividend/divisor;
remainder=dividend%divisor;
}
int main()
{
int x,y,q,r;
cout<<"Enter Dividend:";
cin>>x;
cout<<"Enter Divisor:";
cin>>y;
try
{
divide(x,y,q,r);
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
cout<<"Divisor can not be "<<e<<endl;
}
return 0;
}