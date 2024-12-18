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
aaa *p;
p=new bbb;
p->sam();
p->tom();
return 0;
}