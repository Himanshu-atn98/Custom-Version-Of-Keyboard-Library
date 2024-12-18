#include<iostream>
using namespace std;
class aaa
{
public:
void sam()
{
cout<<"Ujjain"<<endl;
}
};
class bbb:public aaa
{
public:
void tom()
{
cout<<"Indore"<<endl;
}
};
int main()
{
bbb *b;
b=new aaa;
return 0;
}
