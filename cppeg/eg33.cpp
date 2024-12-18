#include<iostream>
using namespace std;
void lmn(int *p)
{
*p=100;
}
int main()
{
int x;
x=50;
lmn(&x);
cout<<"X:"<<x<<endl;
return 0;
}