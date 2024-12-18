 #include<iostream>
using namespace std;
class aaa
{
public:
aaa()
{
cout<<"Default Constructor"<<endl;
}
~aaa()
{
cout<<"Destructor"<<endl;
}
};

int main()
{
aaa a;
aaa *p;
cout<<"Indore"<<endl;
p=new aaa;
cout<<"Dewas"<<endl;
delete p;
cout<<"Ujjain"<<endl;
return 0;
}