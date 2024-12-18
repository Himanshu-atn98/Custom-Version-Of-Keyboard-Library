#include<iostream>
#include<typeinfo>
using namespace std;
class aaa
{
public:
virtual void sam()
{
//some code
}
};
class bbb:public aaa
{
public:
void sam()
{
//some code
}
};
class ccc:public aaa
{
public:
void sam()
{
//some code
}
};
int main()
{
aaa *a=NULL;
int ch;
cout<<"1.bbb\n2.ccc\nEnter your choice:";
cin>>ch;
if(ch==1)
{

//cout<<"***Before object creating->bbb"<<endl;
a=new bbb;
//cout<<"***bbb ka object bana***"<<endl;
}
if(ch==2)
{
//cout<<"***Before object creating->ccc"<<endl;
a=new ccc;
//cout<<"***ccc ka object bana***"<<endl;
}
try
 {
cout<<typeid(*a).name()<<endl;
 }catch(bad_typeid &e)
{
cout<<e.what()<<endl;
}
return 0;
}