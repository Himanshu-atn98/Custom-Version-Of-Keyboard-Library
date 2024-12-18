#include<stdio.h>
#include<stdlib.h>
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
number=atoi(str[x]);
sum=sum+number;
}
printf("Total is %d\n",sum);
return 0;
}