#include<iostream>
using namespace std;
class Bulb
{
private:
int w=0;
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
Bulb g;
cout<<"Wattage is:"<<g.getWattage()<<endl;
return 0;
}