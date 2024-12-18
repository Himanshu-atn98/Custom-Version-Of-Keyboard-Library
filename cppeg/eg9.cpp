#include<iostream>
using namespace std;
namespace thinking
{
int getBonus()
{
return 30;
}
}
namespace machine
{
int getBonus();
}
int machine::getBonus()
{
return 35;
}
int main()
{
cout<<thinking::getBonus()<<"% bonus will be given to staff of thinking department."<<endl;
cout<<machine::getBonus()<<"% bonus will be given to staff of machine department."<<endl;
return 0;
}