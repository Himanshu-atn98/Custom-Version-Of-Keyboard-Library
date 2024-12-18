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
aaa *p1;
p1=new aaa;
p1->sam();
p1->tom();

bbb *p2;
p2=new bbb;
p2->sam();
p2->tom();

aaa *p3;
p3=new bbb;
p3->sam();
p3->tom();

bbb *p4;
p4=new aaa;

return 0;
}