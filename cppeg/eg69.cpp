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
cout<<"Base class copy constructor"<<endl;
}
};
class bbb:public aaa
{
};
int main()
{
bbb k;
bbb g(k);
return 0;
}