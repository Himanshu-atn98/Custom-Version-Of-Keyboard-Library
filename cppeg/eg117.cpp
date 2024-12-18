#include<iostream>
using namespace std;
class aaa
{
public:
aaa()
{
cout<<"Base class Default Constructor"<<endl;
}
~aaa()
{
cout<<"Base class Destructor"<<endl;
}
};
class bbb:public aaa
{
public:
bbb()
{
cout<<"Derived class Default Constructor"<<endl;
}
~bbb()
{
cout<<"Derived class Destructor"<<endl;
}
};
int main()
{
aaa *p;
cout<<"Ujjain"<<endl;
p=new bbb;
cout<<"Indore"<<endl;
delete p;
cout<<"Dewas"<<endl;
return 0;
}