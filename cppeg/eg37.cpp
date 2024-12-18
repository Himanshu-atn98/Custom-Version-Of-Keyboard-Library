#include<iostream>
using namespace std;
class Bulb
{
private:
int w;
public:
void setWattage(int);
int getWattage()
{
return w;
}
};
void Bulb::setWattage(int e)
{
w=e;
}
int main()
{
Bulb b;
b.setWattage(60);
cout<<"Wattage is:"<<b.getWattage()<<endl;
return 0;
}