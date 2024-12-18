#include<iostream>
using namespace std;
class Bulb
{
private:
int w;
public:
Bulb()
{
cout<<"Default contructor got invoked"<<endl;
w=0;
}
Bulb(const Bulb &other)
{
cout<<"Copy Constructor got invoked"<<endl;
w=other.w;
}

void operator=(Bulb other) // this will become--->void operator=(Bulb other=m); this  will->void operator=(Bulb other(m)); 
{
cout<<"=function got invoked"<<endl;
w=other.w;
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
g.setWattage(60);
cout<<"Wattage of object named as g is: "<<g.getWattage()<<endl;
Bulb k(g);
cout<<"Wattage of object named as k is: "<<k.getWattage()<<endl;
Bulb m=k;
cout<<"Wattage of object named as m is: "<<m.getWattage()<<endl;
Bulb j;
cout<<"*****Wattage for J******"<<j.getWattage()<<endl;
j=m; // =function got invoked for the object j.
cout<<"Wattage of object named as j is: "<<j.getWattage()<<endl;
return 0;

}