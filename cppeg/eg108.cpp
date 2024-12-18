#include<iostream>
using namespace std;
class Bulb
{
private:
int w;
public:
void setWattage(int w)
{
this->w=w;
}
int getWattage()
{
return this->w;
}
};
int main()
{
Bulb g,t;
g.setWattage(60);
cout<<"Wattage is:"<<g.getWattage()<<endl;
t.setWattage(100);
cout<<"Wattage is:"<<t.getWattage()<<endl;
return 0;
}