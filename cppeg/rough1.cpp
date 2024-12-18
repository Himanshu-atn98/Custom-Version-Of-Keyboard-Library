#include<iostream>
using namespace std;
class Complex
{
private:
int code;
int data;
public:
int static x;
Complex()
{
code=x;
x++;
cout<<"Default constructor for object with code:"<<code<<endl;
}
Complex(int arg)
{
code=x;
x++;
cout<<"Parameterized constructor for object with code:"<<code<<endl;
}
Complex(const Complex &arg)
{
code=x;
x++;
cout<<"Copy constructor for object with code:"<<code<<endl;
}
void setData(int data)
{
this->data=data;
}
int getData()
{
return this->data;
}
};
int Complex::x=1;
int main()
{
Complex c1;
c1.setData(60);
cout<<c1.getData()<<endl;
int y=5;
c1=y;
return 0;
}
