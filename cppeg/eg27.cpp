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
class bbb:public aaa
{
public:
void sam()
{
//x=10;
y=20;
z=30;
}
void show()
{
//cout<<"X: "<<x<<endl;
cout<<"Y: "<<y<<endl;
cout<<"Z: "<<z<<endl;
}

};
/*class ddd
{
public:
void tom()
{
aaa a;
a.x=10;
a.y=20;
a.z=30;
}
};
*/
int main()
{
aaa a;
bbb b;
//a.x=10;
//a.y=20;
a.z=40;
cout<<"Value of z: "<<a.z<<endl;
b.sam();
b.show();
cout<<"Value of z: "<<b.z<<endl;
return 0;
}