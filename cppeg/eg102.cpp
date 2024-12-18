#include<iostream>
using namespace std;
class Car
{
public:
virtual void manual()=0;
};
int main()
{
Car *c;
c=new Car;
return 0;
}