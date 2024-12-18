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
Bulb g,t;
cout<<"Wattage is:"<<g.getWattage()<<endl;
cout<<"Watag is:"<<t.getWattage()<<endl;
Bulb k;
cout<<"Wattage is:"<<k.getWattage()<<endl;
return 0;
}