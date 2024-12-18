#include<iostream>
using namespace std;
int main()
{
int r;
cout<<"Enter your requirement:";
cin>>r;
int *x;
try
{
cout<<"**Before allocation**"<<endl;
x=new int[r];
int y,t;
for(y=0,t=0;y<r;y++)
{
cout<<"Enter a number:";
cin>>x[y];
t+=x[y];
}
cout<<"Total is:"<<t<<endl;
delete []x;
}catch(bad_alloc &e)
{
cout<<"Invalid requirement,unable to allocate memory for "<<r<<" int's"<<endl;
cout<<e.what()<<endl;
}
return 0;
}