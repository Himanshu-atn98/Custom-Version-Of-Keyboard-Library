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
code=x;
cout<<"Default Constructor"<<endl;
x++;
}
~aaa()
{
cout<<"Destructor of "<<code<<endl;
}
};
int aaa::x=101;
int main()
{
aaa *p;
cout<<"Indore"<<endl;
p=new aaa[3];
cout<<"Dewas"<<endl;
delete p;
cout<<"Ujjain"<<endl;
return 0;
}