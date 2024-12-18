#include<iostream>
using namespace std;
class aaa
{
private:
int x;
protected:
int y;
public:
int z;
};
class bbb:protected aaa
{
/*
public:
void sam()
{
y=20;
z=30;
}
void show()
{
cout<<"Y: "<<y<<endl;
cout<<"Z: "<<z<<endl;
}
*/
};
class ccc:public bbb
{
public:
void sam()
{
y=20;
z=30;
}
 void show()
{
cout<<"Y: "<<y<<endl;
cout<<"Z: "<<z<<endl;
}
};
class ddd:private aaa
{
/*
public:
void tom()
{
y=20;
z=30;
}
void show()
{
cout<<"Y: "<<y<<endl;
cout<<"Z: "<<z<<endl;
}
*/
};
class eee:public ddd
{
public:
void tom()
{
y=20;
z=30;
}
void show()
{
cout<<"Class eee ka show chala"<<endl;
cout<<"Y: "<<y<<endl;
cout<"Z: "<<z<<endl;
}
};
class Hm:public aaa
{
};

int main()
{
/*
bbb b;
b.sam();
b.show();
b.z=300;
cout<<endl<<endl;
ddd d;
d.tom();
d.show();
cout<<endl<<endl;
*/
ccc c;
c.sam();
c.show();
cout<<endl<<endl;
//c.z=3000;
Hm h;
h.z=30000;
cout<<"value of class Hm'z: "<<h.z<<endl;

return 0;
}