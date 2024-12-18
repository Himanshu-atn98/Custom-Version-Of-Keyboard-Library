#include<iostream>
using namespace std;
class Bulb
{
private:
int w;
static int p;
public:
void setWattage(int e)
{
w=e;
}
void setPrice(int e)
{
p=e;
}
int getWattage()
{
return w;
}
int getPrice()
{
return p;
}
};
int main()
{
Bulb g,t;
g.setWattage(60);
g.setPrice(10);
cout<<"Wattage is: "<<g.getWattage()<<endl;
cout<<"Price is: "<<g.getPrice()<<endl;
t.setWattage(100);
t.setPrice(15);
cout<<"Wattage is: "<<t.getWattage()<<endl;
cout<<"Price is: "<<t.getPrice()<<endl;
return 0;
}