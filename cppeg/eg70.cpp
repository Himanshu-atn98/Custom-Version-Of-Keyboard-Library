#include<iostream>
using namespace std;
class aaa
{
public:
aaa()
{
cout<<"Base class default constructor"<<endl;
}
};
class bbb:public aaa
{
public:
};
int main()
{
bbb k;
bbb g(k);
return 0;
}