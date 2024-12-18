#include<stdio.h>
class Keyboard
{
public:
void operator>>(int &x)
{
scanf("%d",&x);
fflush(stdin);
}
void operator>>(float &x)
{
scanf("%f",&x);
fflush(stdin);
}
void operator>>(char &x)
{
scanf("%c",&x);
fflush(stdin);
}
void operator>>(char *x)
{
gets(x);
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
char a[21];
char b;
int c;
float d;
printf("Enter name:");
kin>>a;
printf("Enter gender:");
kin>>b;
printf("Enter age:");
kin>>c;
printf("Enter basic salary:");
kin>>d;
printf("%s, %c, %d, %f",a,b,c,d);
return 0;
}