#include<iostream>
using namespace std;
int add(int e,int f)
{
return e+f;
}
double add(double e,double f)
{
return e+f;
}
float add(float e,float f)
{
return e+f;
}
int main()
{
cout<<"Total of 10 and 20 is: "<<add(10,20)<<endl;
cout<<"Total of 10.2345 and 20.5678 is: "<<add(10.2345,20.5678)<<endl;
cout<<"Total of 10.2345 and 20.5678 is: "<<add(10.234f,20.345f)<<endl;
return 0;
}