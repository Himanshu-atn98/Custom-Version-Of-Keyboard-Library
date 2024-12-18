#include<iostream>
using namespace std;
int main()
{
int y,t,r;
cout<<"Enter your requirement:";
cin>>r;
if(r<=0)
{
cout<<"Invalid requirement"<<endl;
return 0;
}
int x[r];
for(y=0;y<r;y++)
{
cout<<"Enter a number:";
cin>>x[y];
}
for(y=0,t=0;y<r;y++) t+=x[y];
cout<<"Total is :"<<t<<endl;
return 0;
}