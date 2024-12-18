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
b->w=60;
b->setWattage(120);
cout<<"Wattage is:"<<b->getWattage()<<endl;
b->ramu();
return 0;
}