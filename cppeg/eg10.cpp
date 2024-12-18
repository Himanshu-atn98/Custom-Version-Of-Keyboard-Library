#include<iostream>
using namespace std;
int add(int e,int f)
{
return e+f;
}
int add(int e,int f,int g)
{
return e+f+g;
}
int add(int e,int f,int g,int h)
{
return e+f+g+h;
}
int main()
{
cout<<"The sum of 10 and 20 is:"<<add(10,20)<<endl;
cout<<"The sum of 10,20 and 30 is:"<<add(10,20,30)<<endl;
cout<<"The sum of 10,20,30 and 40 is:"<<add(10,20,30,40)<<endl;
return 0;
}