#include<iostream>
using namespace std;
int main()
{
int y,t,r;
int *x,*p;
cout<<"Enter your requirement:";
cin>>r;
if(r<=0)
{
cout<<"Invalid requirement"<<endl;
return 0;
}
x=new int[r];
for(p=x,y=0;y<r;y++,p++)
{
cout<<"Enter a number:";
cin>>*p;
}

for(p=x,y=0,t=0;y<r;y++,p++)
{
t+=*p;
}
cout<<"Total is:"<<t<<endl;
return 0;
}