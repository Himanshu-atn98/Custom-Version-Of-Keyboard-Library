#include<iostream>
using namespace std;
class Car
{
public:
virtual void manual()=0;
};
class Matiz:public Car
{
private:
void manual()
{
cout<<"Implemented manual() method."<<endl;
}
};
int main()
{
Car *c;
c=new Matiz;
c->manual();
return 0;
}