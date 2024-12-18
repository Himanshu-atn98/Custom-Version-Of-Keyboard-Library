#include<iostream>
using namespace std;
class Car
{
public:
virtual void manual()=0;
};
class Matiz:public Car
{
};
int main()
{
Matiz m;
return 0;
}