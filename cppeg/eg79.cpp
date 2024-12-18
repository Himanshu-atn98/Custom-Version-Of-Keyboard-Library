#include<iostream>
using namespace std;
int main()
{
int x[5];
int *p;
p=x;
cout<<p<<endl;
p++;
cout<<p<<endl;
p=p+2;
cout<<p<<endl;
p=p-3;
cout<<(unsigned int)p<<endl;
p++;
cout<<(unsigned int)p<<endl;
p=p+2;
cout<<(unsigned int)p<<endl;
return 0;
}