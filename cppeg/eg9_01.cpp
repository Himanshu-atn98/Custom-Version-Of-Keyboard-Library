#include<iostream>
using namespace std;
namespace thinking
{
int getBonus()
{
return 30;
}
}
namespace th=thinking;


namespace machine
{
int getBonus();
}
namespace ma=machine;
int machine::getBonus()
{
return 35;
}

int main()
{
cout<<th::getBonus()<<"% bonus will be given to staff of thinking department."<<endl;
cout<<ma::getBonus()<<"% bonus will be given to staff of machine department."<<endl;
return 0;
}