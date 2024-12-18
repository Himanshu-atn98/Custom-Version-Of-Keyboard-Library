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
Bulb *b;
b=new Bulb;
cout<<(unsigned int)b<<endl;
b->setWattage(60);
cout<<"Wattage is:"<<b->getWattage()<<endl;
delete b;
cout<<(unsigned int)b<<endl;
b=new Bulb[3];
cout<<(unsigned int)b<<endl;
b[0].setWattage(100);
cout<<"Wattage is:"<<b[0].getWattage()<<endl;
b[1].setWattage(0);
cout<<"Wattage is:"<<b[1].getWattage()<<endl;
b[2].setWattage(120);
cout<<"Wattage is:"<<b[2].getWattage()<<endl;
cout<<(unsigned int)b<<endl;
return 0;
}