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
};
int main()
{
bbb b;
cout<<"Ujjain"<<endl;
return 0;
}