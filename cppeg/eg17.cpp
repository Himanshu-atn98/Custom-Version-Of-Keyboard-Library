#include<iostream>
using namespace std;
class Bulb
{
private:
int w;
public:
void setWattage(int e)
{
if(e>=0 && e<=240) w=e;
else w=0;
}
int getWattage()
{
return w;
}
};
int main()
{
Bulb g,t;
g.setWattage(-30);
cout<<"Wattage is: "<<g.getWattage()<<endl;
t.setWattage(100);
cout<<"Wattage is: "<<t.getWattage()<<endl;
return 0;
}