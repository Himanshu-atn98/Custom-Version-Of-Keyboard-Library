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
int operator<(Bulb &right)
{
return w<right.w;
}
};
int main()
{
Bulb g,t;
//g.setWattage(60);
g.setWattage(120);
//t.setWattage(100);
t.setWattage(50);
if(g<t)
{
cout<<"Wattage of object named as g is less than that of object named as t"<<endl;
}
else
{
cout<<"Wattage of object named as g is not less than that of object named as t"<<endl;
}
return 0;
}