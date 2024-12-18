#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
int x=110;
char a[21];
float y=2.33f;
itoa(x,a,10);
printf("%d as String %s\n",x,a);
sprintf(a,"%d",x);
printf("%d as Sting %s\n",x,a);
sprintf(a,"%f",y);
printf("%f as String %s\n",y,a);
sprintf(a,"%6.2f",y);
printf("(%6.2f) as string (%s)\n",y,a);
return 0;
}