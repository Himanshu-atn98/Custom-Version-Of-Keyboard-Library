#include<iostream>
using namespace std;
class Bulb
{
private:
int w;
public:
void initialize()
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
Bulb g;
//g.initialize();
cout<<"Wattage is:"<<g.getWattage()<<endl;
return 0;
}
