#include<iostream>
using namespace std;
void add(int x,int y)
{
cout<<"Total of "<<x<<" and "<<y<<"is:"<<x+y<<endl;
}
int getSquare(int x)
{
return x*x;
}
int getPower(int base,int exponent)
{
int p,x;
for(p=base,x=2;x<=exponent;x++)
{
p=p*base;
}
return p;
}
int main()
{
add(10,20);
cout<<"Square of 5 is:"<<getSquare(5)<<endl;
cout<<"5 to the third power or 5 cubed is:"<<getPower(5,3)<<endl;
cout<<"\n*****Through pointer to function*****\n"<<endl;
void (*p)(int,int);
int (*k)(int);
int (*t)(int,int);
p=add;
k=getSquare;
t=getPower;
p(10,20);
//p(30,50);
cout<<"square of 5 is:"<<k(5)<<endl;
cout<<"5 to the third power or 5 cubed is:"<<t(5,3)<<endl;
return 0;
}