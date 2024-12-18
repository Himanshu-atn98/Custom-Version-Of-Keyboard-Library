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
void operator=(aaa other)
{
cout<<"=function with parameter details as(aaa other)"<<endl;
cout<<"=function code of argument is:"<<other.code<<endl;
cout<<"=function: code of object for which the = is working is"<<code<<endl;
}
void operator=(int i)
{
cout<<"=function with parameter details as(int i)"<<endl;
cout<<"=function code of argument is:"<<i<<endl;
cout<<"=function: code of object for which the = is working is"<<code<<endl;
}
};
int aaa::x=1001;
int main()
{
cout<<"*****************a1**************************"<<endl;
aaa a1;
cout<<"*****************a2**************************"<<endl;
aaa a2=a1;
cout<<"*****************a3**************************"<<endl;
aaa a3;
cout<<"*****************all objects created by code**************************"<<endl;
a3=a2;
cout<<"code of object named as a1 is "<<a1.getCode()<<endl;
cout<<"code of object named as a2 is "<<a2.getCode()<<endl;
cout<<"code of object named as a3 is "<<a3.getCode()<<endl;
a3=50;
//return 0;






cout<<"*****************a5**************************"<<endl;
aaa a5;
a5=10;
cout<<"Code of object named as a5 is:"<<a5.getCode()<<endl;
return 0;
}