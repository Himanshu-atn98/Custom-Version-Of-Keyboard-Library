#include<iostream>
using namespace std;
class Bulb
{
private:
int w;
public:
Bulb(int e)
{
if(e<0||e>256) w=0;
else w=e;
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
Bulb k(100);
cout<<"Wattage is:"<<k.getWattage()<<endl;
return 0;
}