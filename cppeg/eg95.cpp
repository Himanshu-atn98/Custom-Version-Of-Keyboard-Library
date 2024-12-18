//Application based on the theory of base and derived class pointer and objects.

#include<iostream>
using namespace std;

class MarutiALTO
{
private:
// some 1000 properties.
public:
void manual()
{
cout<<"Details of MarutiALTO"<<endl;
}
//many more methods.
};
class HondaCity
{
private:
// some 1000 properties.
public:
void manual()
{
cout<<"Details of HondaCity"<<endl;
}
//many more methods.
};
int main()
{
int ch;
MarutiALTO m;
HondaCity h;
cout<<"1.Maruti ALTO"<<endl;
cout<<"2.Honda City"<<endl;
cout<<"Enter your choice:";
cin>>ch;
if(ch>=1 && ch<=2)
{
if(ch==1)
{
m.manual();
}
if(ch==2)
{
h.manual();
}
}
else
{
cout<<"Invalid choice"<<endl;
}
return 0;
}
