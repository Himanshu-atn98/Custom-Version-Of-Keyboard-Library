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
Toy(const Toy &other)
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
Toy operator+(int number)
{
return Toy(this->price+number);
}
Toy operator+(Toy &other)
{
return Toy(this->price+other.price);
}
};
int main()
{
Toy t1,t2,t3;
t1.setPrice(100);
t2=t1+30;
t3=t1+t2;
cout<<"Price of object named as t1 is:"<<t1.getPrice()<<endl;
cout<<"Price of object named as t2 is:"<<t2.getPrice()<<endl;
cout<<"Price of object named as t3 is:"<<t3.getPrice()<<endl;
return 0;
}