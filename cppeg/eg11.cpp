#include<iostream>
using namespace std;
int add(int e,int f)
{
return e+f;
}
void add(int p,int q)
{
cout<<"Total of"<<p<<"and"<<q<<"is"<<p+q<<endl;
}
int main()
{
int x;
x=add(10,20);
cout<<"Total of 10 and 20 is:"<<x<<endl;
return 0;
}