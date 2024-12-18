#include<iostream>
using namespace std;
int main()
{
int j;
j=60;
int *p;
p=new int;
*p=100;
cout<<"Value of j:"<<j<<endl<<"Value of nameless variable:"<<*p<<endl;
return 0;
}