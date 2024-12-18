#include<iostream>
using namespace std;
int add(int x,int y)
{
int z;
z=x+y;
return z;
}
float add(float x,float y)
{
float z;
z=x+y;
return z;
}
int main()
{
cout<<"Totall of 10 and 20 is:"<<add(10,20)<<endl;
cout<<"Total of 10.2 and 20.3 is:"<<add(10.2f,20.3f)<<endl;
return 0;
}