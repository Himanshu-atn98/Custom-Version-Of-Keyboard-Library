#include<iostream>
using namespace std;
class Bulb
{
private:
int w;
public:
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
int x;
int *p;
p=&x;
*p=60;
cout<<"Value of x:"<<*p<<endl;
Bulb g;
Bulb *k;
k=&g;
g.setWattage(120);
cout<<"Wattage is:"<<k->getWattage()<<endl;
Bulb m;
Bulb *u;
u=&m;
(*u).setWattage(100);
cout<<"Wattage is:"<<(*u).getWattage()<<endl;
return 0;
}