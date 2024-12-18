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
void setPrice(int price)
{
this->price=price;
}
int getPrice()
{
return this->price;
}
friend int operator+(int ,Toy &);
};

int operator+(int k,Toy &e)
{
return k+e.price;
}
int main()
{
Toy t1;
t1.setPrice(100);
int x;
x=200+t1;
cout<<"x:"<<x<<endl;
float f;
f=2.33f+t1;
cout<<"f:"<<f<<endl;
return 0;
}