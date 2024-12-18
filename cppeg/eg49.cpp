#include<iostream>
using namespace std;
int add(int p,int q,int r=0,int s=0)
{
return p+q+r+s;
}
int main()
{
cout<<"Total of 10 and 20 is:"<<add(10,20)<<endl;
cout<<"Total of 10,20 and 30 is:"<<add(10,20,30)<<endl;
cout<<"Total of 10,20,30 and 40 is:"<<add(10,20,30,40)<<endl;
return 0;
}