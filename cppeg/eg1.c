
#include"mylib.h"
#include<stdio.h>
int main()
{
char a[21],b[21];
int length=getStringLength("Himanshu");
printf("Length Of String: %d\n",length);

copyString(a,"Ujjain");
printf("Copyied String in array a: %s\n",a);
copyString(b,"Indore");
printf("Copyied String in array b: %s\n",b);

concatenateString(a,b);
printf("Concatenate String: %s\n",a);

toUpperCase(a);
printf("In UpperCase: %s\n",a);
toLowerCase(b);
printf("In LowerCase: %s\n",b);

reverseString(a);
printf("Reversed String: %s\n",a);

return 0;
}

