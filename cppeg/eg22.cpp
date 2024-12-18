#include<iostream>
#include<iomanip>
using namespace std;
class Rectangle
{
private:
int length;
int breadth;
public:
void setLength(int e)
{
length=e;
}
void setBreadth(int e)
{
breadth=e;
}

int getLength()
{
return length;
}
int getBreadth()
{
return breadth;
}
};

class Box:private Rectangle
{
private:
int height;
public:
void askInformation()
{
int l,b;
cout<<"Enter the Length: ";
cin>>l;
setLength(l);
cout<<"Enter the Breadth: ";
cin>>b;
setBreadth(b);
cout<<"Enter the Height: ";
cin>>height;
}
void printInformation()
{
cout<<"Length: "<<getLength()<<endl;
cout<<"Breadth: "<<getBreadth()<<endl;
cout<<"Height: "<<height<<endl;
}
};
int main()
{
Box x;
x.askInformation();
x.printInformation();
return 0;
}