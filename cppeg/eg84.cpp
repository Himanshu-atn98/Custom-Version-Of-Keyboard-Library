#include<iostream>
using namespace std;
void lmn()
{
int *x;
x=new int;
cout<<(unsigned int)x<<endl;
*x=60;
cout<<*x<<endl;
delete x;
cout<<(unsigned int)x<<endl;
//*x=90;
//*x=100;
//cout<<*x<<endl;
}
int main()
{
lmn();
cout<<"Ujjain"<<endl;
return 0;
}