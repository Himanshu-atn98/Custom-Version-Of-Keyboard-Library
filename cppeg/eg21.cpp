 #include<iostream>
using namespace std;
class Rectangle
{
int length;   // by default it's access specifier will be private
int breadth;  // by default it's access specifier will be private
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
int height; // by default it's access specifier will be private
public:
void setHeight(int e)
{
height=e;
}
int getHeight()
{
return height;
}
};
int main()
{
Box x;
/*
x.length=10;
x.breadth=3;
x.height=40;
x.setLength(10);
x.setBreadth(3);
*/

x.setHeight(40);
cout<<"Height: :"<<x.getHeight()<<endl;

//cout<<"Lenght: "<<x.getLength()<<endl;
//cout<<"Breadth: "<<x.getBreadth()<<endl;
return 0;
}
