#include<iostream>
using namespace std;
class aaa
{
static int x;
int code;
public:
aaa()
{
cout<<"Default value of code "<<code<<endl;
code=x;
cout<<"Default constructor for object with code as:"<<code<<endl;
x++;
}
aaa(int e)
{
cout<<"Default value of code: "<<code<<endl;
code=x;
cout<<"Parameterized constructor for object with code as:"<<code<<endl;
x++;
}
aaa(const aaa &a)
{
cout<<"Default value of code "<<code<<endl;
code=x;
cout<<"code of argument:"<<a.code<<endl;
cout<<"Copy constructor for object with code as:"<<code<<endl;
x++;
}
int getCode()
{
return code;
}
};
int aaa::x=1001;
int main()
{
cout<<"*****************a5**************************"<<endl;
aaa a5;
a5=10;
cout<<"Code of object named as a5 is:"<<a5.getCode()<<endl;
return 0;
}