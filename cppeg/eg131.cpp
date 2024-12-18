#include<iostream>
using namespace std;
class Bulb 
{
private:
static int x;
int code;
int w;
public:
Bulb()
{
code=x;
cout<<"Default Constructor for object with code as:"<<code<<endl;
w=0;
x++;
}
Bulb(int e)
{
code=x;
cout<<"Parameterized constructor for object with code as:"<<code<<endl;
w=e;
x++;
}
Bulb(const Bulb &other)
{
code=x;
cout<<"Copy constructor for object with code as:"<<code<<endl;
w=other.w;
x++;
}
void operator=(Bulb other)
{
cout<<"= function with paramaeter details as(Bulb other)"<<endl;
cout<<"= function code of argument is:"<<other.code<<endl;
cout<<"= function : code of object for which the = is working is:"<<code<<endl; //
w=other.w;
}
void setWattage(int e)
{
w=e;
}
int getWattage()
{
return w;
}
};
int main()
{
Bulb g,t,m;
g=t=m=60;// This line will be->g=y=m=Bulb(60);
cout<<"Wattage of bulb named as g is:"<<g.getWattage()<<endl;
cout<<"Wattage of bulb named as t is:"<<t.getWattage()<<endl;
cout<<"Wattage og bulb named as m is:"<<m.getWattage()<<endl;
return 0;
}