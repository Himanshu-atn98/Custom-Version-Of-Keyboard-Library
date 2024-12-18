#include<iostream>
using namespace std;
class aaa
{
public:
void som()
{
cout<<"Som chala->Cool"<<endl;
}
};
class bbb:public aaa
{
public:
void tom()
{
cout<<"Tom chala->Hello"<<endl;
}
};
class ccc:public aaa
{
public:
void lion()
{
cout<<"Lion chala->Hi"<<endl;
}
};
class ddd:public bbb,public ccc
{
public:
void tiger()
{
cout<<"tiger chala->whatever"<<endl;
}
};
int main()
{
ddd d;
d.som();
//ccc c;
//c.som();
return 0;
}