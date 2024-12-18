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
operator int()
{
return this->price;
}
};
int main()
{
Toy t1;
t1.setPrice(100);
int x;
x=200+t1;
cout<<x<<endl;
return 0;
}
 