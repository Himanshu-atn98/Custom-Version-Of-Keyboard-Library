#include<iostream>
using namespace std;
class aaa
{
public:
aaa(int e)
{
cout<<"Base class parameterized constructor"<<endl;
}
};
class bbb:public aaa
{
public:
bbb()
{
cout<<"Derived class default constructor"<<endl;
}
bbb(int e)
{
cout<<"Derived class parameterized constructor"<<endl;
}
};
int main()
{
bbb k;
bbb g(10);
return 0;
}