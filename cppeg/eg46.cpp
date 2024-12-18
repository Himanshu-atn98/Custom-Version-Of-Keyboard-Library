#include<iostream>
#include<string.h>
using namespace std;
class Ink
{
private:
char color[21];
float viscosity;
public:
void setColor(const char *e)
{
strcpy(color,e);
}
void getColor(char *e)
{
strcpy(e,color);
}
void setViscosity(float e)
{
viscosity=e;
}
float getViscosity()
{
return viscosity;
}
};

class Pen
{
private:
int price;
Ink ink;
public:
void setInk(Ink &e)
{
char c[21];
e.getColor(c);
ink.setColor(c);
ink.setViscosity(e.getViscosity());
}
void getInk(Ink &e)
{
char c[21];
ink.getColor(c);
e.setColor(c);
e.setViscosity(ink.getViscosity());
}
void setPrice(int e)
{
price=e;
}
int getPrice()
{
return price;
}
};
int main()
{
Ink i;
i.setColor("Red");
i.setViscosity(0.8f);
Pen pen;
pen.setInk(i);
pen.setPrice(50);
char c[21];
int p;
float v;
Ink k;
pen.getInk(k);
k.getColor(c);
v=k.getViscosity();
p=pen.getPrice();
cout<<"Price of pen:"<<p<<endl;
cout<<"Color of ink:"<<c<<endl;
cout<<"Viscosity of ink:"<<v<<endl;
return 0;
}