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
bbb():aaa(100)
{
cout<<"Derived class default constructor"<<endl;
}
bbb(int e):aaa(200)
{
cout<<"Derived class parameterized constructor with one parameter"<<endl;
}

/*
bbb(int e,int f):aaa(e)
{
cout<<"Derived class parameterized constructor with two parametr"<<endl;
}
*/

bbb(int e,int f):aaa(f)
{
cout<<"Derived class parameterized constructor with two parametr"<<endl;
}
};
int main()
{
bbb k;
bbb g(10);
bbb m(30,40);
return 0;
}