#include<stdio.h>
void printNewLineCharacter()
{
printf("\n");
}
class Monitor
{
public:
Monitor & operator<<(int x)
{
printf("%d",x);
return *this;
}
Monitor & operator<<(float x)
{
printf("%f",x);
return *this;
}
Monitor & operator<<(char x)
{
printf("%c",x);
return *this;
}
Monitor & operator<<(const char *x)
{
printf("%s",x);
}
Monitor & operator<<(void(*f)())
{
f();
}
};
namespace tmstd
{
Monitor mout;
void(*newLine)()=printNewLineCharacter;
}
using namespace tmstd;
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
Monitor & operator<<(Monitor &m,Bulb &b)
{
m<<b.getWattage();
return m;
}
int main()
{
Monitor m1;
// m1<<10<<newLine; -->this line will also execute.
Bulb g;
g.setWattage(60);
mout<<"Cool Implementation"<<newLine;
mout<<"Wattage is "<<g<<newLine;
return 0;
}
