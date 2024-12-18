#include<iostream>
using namespace std;
class aaa
{
public:
aaa()
{
cout<<"Base class default constructor"<<endl;
}
aaa(const aaa&e)
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
bbb(const bbb &e)
{
cout<<"Derived class copy constructor"<<endl;
}
};
int main()
{
bbb k;
bbb g(k);
return 0;
}