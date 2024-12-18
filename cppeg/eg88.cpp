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
class bbb
{
public:
void tom()
{
cout<<"Indore"<<endl;
}
};
int main()
{
aaa *a;
a=new bbb;
bbb *b;
b=new aaa;
return 0;
}