#include<iostream>
using namespace std;
class Toy
{
private:
int price;
public:
Toy()
{
this->price=0;
}
Toy(int price)
{
this->price=price;
}
Toy(Toy &other)
{
this->price=other.price;
}
Toy & operator=(Toy other)
{
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
