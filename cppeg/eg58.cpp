#include<iostream>
using namespace std;
class Bulb
{
private:
int w;
public:
Bulb()
{
w=0;
}
Bulb(int e)
{
w=e;
}
Bulb(const Bulb &e)
{
w=e.w;
}
void setWattage(int e)
{
w=e;
}
int getWattage()
{
return w;
}
};
int main()
{
Bulb g,t(60);
cout<<"Wattage is:"<<g.getWattage()<<endl;
cout<<"Wattage is:"<<t.getWattage()<<endl;
Bulb k(t);
cout<<"Wattage is:"<<k.getWattage()<<endl;
return 0;
}
