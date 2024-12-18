#include<stdio.h>
int main(int count, char *s[])
{
int x;
printf("Number of command line arguments :%d\n",count);
printf("Name of the program file as argument number 1: %s\n",s[0]);
if(count==1)
{
printf("No arguments other than the program\n");
}
else
{
printf("Arguments followed by the name of the program\n");
for(x=1;x<count;x++)
{
printf("Argument number %d: %s\n",x+1,s[x]);
}
}
return 0;
}