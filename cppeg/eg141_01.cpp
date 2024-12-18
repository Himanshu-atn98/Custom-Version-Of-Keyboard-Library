#include<iostream>
using namespace std;
class Toy
{
private:
static int x;
int code;
int price;
public:
Toy()
{
code=x;
x++;
this->price=0;
}
Toy(int price)
{
code=x;
x++;
this->price=price;
}
Toy(Toy &other)
{
code=x;
x++;
cout<<"Copy constructor for object code as:"<<code<<endl;
cout<<"Code of argument object:"<<other.code<<endl;
this->price=other.price;
}
Toy & operator=(Toy other)
{
cout<<"= function got invoked"<<endl;
cout<<"= function: code of argument object:"<<other.code<<endl;
cout<<"= function is owrking for the object code:"<<code<<endl;
this->price=other.price;
return *this;
}
void setPrice(int price)
{
this->price=price;
}
int getPrice()
{
return this->price;
}
void operator+=(int number)
{
this->price=this->price+number;
}
void  operator+=(Toy &other)
{
this->price=this->price+other.price;
}
};
int Toy::x=101;
int main()
{
Toy t1,t2,t3;
t1.setPrice(100);
t2.setPrice(500);
t3.setPrice(1000);
t1+=30; // It means that---> t1=t1+30;
t3+=t2;
cout<<"Price of object named as t1 is:"<<t1.getPrice()<<endl;
cout<<"Price of object named as t2 is:"<<t2.getPrice()<<endl;
cout<<"Price of object named as t3 is:"<<t3.getPrice()<<endl;

t3=t1;
cout<<"*******After-> t3=t1********"<<endl;
cout<<"Price of object named as t3 is:"<<t3.getPrice()<<endl;
return 0;
}
