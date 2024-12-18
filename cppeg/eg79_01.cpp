#include<iostream>
using namespace std;
int main()
{
int x[5]={10,20,30,40,50};
//x[0]=100;
//int x[5];
int *p;
p=x;
cout<<p<<endl;
cout<<(unsigned int)p<<endl;
cout<<*p<<endl;
p++;
cout<<*p<<endl;
p=p+2;
cout<<*p<<endl;
p++;
p-=3;
cout<<*p<<endl;
return 0;
}