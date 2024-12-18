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
void setColorOfInk(const char *e)
{
ink.setColor(e);
}
void getColorOfInk(char *e)
{
ink.getColor(e);
}
void setViscosityOfInk(float e)
{
ink.setViscosity(e);
}
float getViscosityOfInk()
{
return ink.getViscosity();
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
Pen pen;
pen.setColorOfInk("Red");
pen.setViscosityOfInk(0.8f);
pen.setPrice(50);
char c[21];
int p;
float v;
pen.getColorOfInk(c);
v=pen.getViscosityOfInk();
p=pen.getPrice();
cout<<"Price of pen:"<<p<<endl;
cout<<"Color of pen:"<<c<<endl;
cout<<"Viscosity of pen:"<<v<<endl;
return 0;
}