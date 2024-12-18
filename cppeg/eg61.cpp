#include<iostream>
using namespace std;
class aaa
{
public:
aaa()
{
cout<<"Base class default constructor"<<endl;
}

/*
aaa(const aaa &_) // will written by the compiler,if not written by the programmer.
{
-----
-----
-----
}
*/

};

class bbb:public aaa
{
};
int main()
{
bbb k;
return 0;
}