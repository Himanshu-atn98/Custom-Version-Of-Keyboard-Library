#include<iostream>
using namespace std;
class aaa
{
public:
void sam()
{
cout<<"Ujjain"<<endl;
}
static tom()
{
cout<<"Indore"<<endl;
}
};
int main()
{
//aaa::sam();//cannot call member function 'void aaa::sam()' without object
 
aaa::tom();
aaa a;
a.sam();
a.tom();
return 0;
}