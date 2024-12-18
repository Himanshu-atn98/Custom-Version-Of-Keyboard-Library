#include<iostream>
using namespace std;
void lmn()
{
int *x;
x=new int[3];
cout<<(unsigned int)x<<endl;
x[0]=10;
x[1]=20;
x[2]=30;
cout<<x[0]<<endl;
cout<<x[1]<<endl;
cout<<x[2]<<endl;
delete []x;
cout<<(unsigned int)x<<endl;
}
int main()
{
lmn();
cout<<"Ujjain"<<endl;
return 0;
}