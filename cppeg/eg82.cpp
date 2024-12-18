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
int r;
cout<<"How many bulb's:";
cin>>r;
if(r<0)
{
cout<<"Invalid requirement"<<endl;
return 0;
}
Bulb *b;
b=new Bulb[r];
int x,y;
for(y=0;y<r;y++)
{
cout<<"Enter wattage:";
cin>>x;
b[y].setWattage(x);
}
for(y=0;y<r;y++)
{
cout<<"Wattage is:"<<(b+y)->getWattage()<<endl;
}
return 0;
}
