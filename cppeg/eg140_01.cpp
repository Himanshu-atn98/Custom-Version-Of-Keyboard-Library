#include<iostream>
using namespace std;
class Toy
{
private:
static int x;
int price,code;
public:
Toy()
{
code=x;
x++;
cout<<"Default constructor for object with code as:"<<code<<endl;
this->price=0;
}
Toy(int price)
{
code=x;
x++;
cout<<"Parameterized constructor for object with code as:"<<code<<endl;
this->price=price;
}
Toy(const Toy &other)
{
code=x;
x++;
cout<<"Copy constructor for object with code as:"<<code<<endl;
cout<<"Code of the argument object:"<<other.code<<endl;
this->price=other.price;
}
Toy & operator=(Toy other)
{
cout<<"= function with parameter details as (Toy other)"<<endl;
cout<<"= function code of argument is:"<<other.code<<endl;
cout<<"= function : code of object for which the =is working is"<<code<<endl;
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
cout<<"+ function with parameter details as (int number)"<<endl;
cout<<"+ function : code of object for which the =is working is"<<code<<endl;
return Toy(this->price+number);
}
Toy operator+(Toy &other)
{
cout<<"+ function with parameter details as (Toy other)"<<endl;
cout<<"+ function code of argument is:"<<other.code<<endl;
cout<<"+ function : code of object for which the =is working is"<<code<<endl;

return Toy(this->price+other.price);
}
};
int Toy::x=101;
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