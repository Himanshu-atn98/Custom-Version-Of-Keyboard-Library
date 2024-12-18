#include<stdio.h>
class Keyboard
{
public:
void operator>>(int x)
{
scanf("%d",&x);
fflush(stdin);
}
};
namespace tmstd
{
Keyboard kin;
}
using namespace tmstd;
int main()
{
int j=10;
kin>>j;
printf("%d",j);
return 0;
}