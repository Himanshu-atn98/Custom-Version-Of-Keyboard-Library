#include<stdio.h>
#include<string.h>
int convertToInt(char *p)
{
char *q;
int e,n;
for(q=p+strlen(p)-1,e=1,n=0;q>p;q--,e*=10)
{
if(*q<48||*q>57) return 0;
n=n+(((*q)-48)*e);
}
return n;
}
int main(int cnt,char *str[])
{
int number,sum;
int x;
if(cnt==1)
{
printf("No numbers passed for processing");
return 0;
}
for(sum=0,x=1;x<cnt;x++)
{
number=convertToInt(str[x]);
sum+=number;
}
printf("Total is %d\n",sum);
return 0;
}