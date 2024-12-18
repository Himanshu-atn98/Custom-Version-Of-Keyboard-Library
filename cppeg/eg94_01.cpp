#include<iostream>
using namespace std;
class aaa
{
public:
void sam()
{
cout<<"Ujjain"<<endl;
}
virtual void tom()
{
cout<<"Base class tom() method"<<endl;
}
};
class bbb:public aaa
{
public:

/*
void tom()
{
cout<<"Derived class tom() method"<<endl;
}
*/

};
int main()
{
aaa *a;
a=new bbb;
a->sam();
a->tom();
return 0;
}