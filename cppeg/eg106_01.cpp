 #include<iostream>
using namespace std;
class Bulb
{
private:
int w;
public:
void setWattage(int e,Bulb *p)
{
p->w=e;
}
int getWattage(Bulb *p)
{
return p->w;
}
};
int main()
{
Bulb g,t;
g.setWattage(60,&g);
cout<<"Wattage is:"<<g.getWattage(&g)<<endl;
t.setWattage(100,&t);
cout<<"Wattage is:"<<t.getWattage(&t)<<endl;
return 0;
}