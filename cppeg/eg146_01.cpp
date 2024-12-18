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


int operator++()
{
return this->price=this->price+1;
}


/*

Toy & operator++()
{
cout<<"gets invoked on Prefix operation"<<endl;
this->price=this->price+1;
return *this;
}

Toy & operator++(int)
{
cout<<"gets invoked on Postfix operation"<<endl;
this->price=this->price+1;
return *this;
}
*/
};
int main()
{
Toy t1;
t1.setPrice(100);
//t1++;
cout<<"Price of object named as t1 is:"<<t1.getPrice()<<endl;

Toy t2;
t2.setPrice(200);
//++t2;
cout<<"Price of object named as t2 is:"<<t2.getPrice()<<endl;

int a=++t1;
cout<<"a:"<<a<<endl;
return 0;
}