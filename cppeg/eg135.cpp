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
ostream & operator<<(ostream &m,Bulb &b)
{
m<<b.getWattage();
return m;
}
int main()
{
Bulb g;
g.setWattage(60);
cout<<"Predefined cool implementation"<<endl;
cout<<"Wattage is"<<g<<endl;
return 0;
}