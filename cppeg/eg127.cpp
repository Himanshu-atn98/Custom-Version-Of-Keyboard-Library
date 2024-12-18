#include<iostream>
using namespace std;
class aaa
{
private:
static int x;
int code;
public:
aaa()
{
cout<<"Default value of code:"<<code<<endl;
code=x;
cout<<"Default constructor for object with code as:"<<code<<endl;
x++;
}
aaa(int e)
{
cout<<"Default value of code:"<<code<<endl;
code=x;
cout<<"Parameterized constructor for object with code as:"<<code<<endl;
x++;
}
aaa(const aaa &a)
{
cout<<"Default value of code:"<<code<<endl;
code=x;
cout<<"Code of argument:"<<a.code<<endl;
cout<<"Copy Constructor for object with code as:"<<code<<endl;
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
cout<<"****************a1****************"<<endl;
aaa a1;
cout<<"****************a2****************"<<endl;
aaa a2(10);
cout<<"****************a3****************"<<endl;
aaa a3(a2);
cout<<"****************a4****************"<<endl;
aaa a4=a3;
cout<<"****************a5****************"<<endl;
aaa a5;
a5=10; //this code will be replaced with---> a5=aaa(10); 
cout<<"Code of object named as a5 is:"<<a5.getCode()<<endl;
cout<<"****************m****************"<<endl;
aaa m;
m=aaa(20);
cout<<"Code of object named as m is:"<<m.getCode()<<endl;
cout<<"****************k****************"<<endl;
aaa k;
k=m;
cout<<"Code of object named as k is:"<<k.getCode()<<endl;
cout<<"****************j****************"<<endl;
aaa j;
j=aaa(k);
cout<<"Code of object named as j is:"<<j.getCode()<<endl;
return 0;
}