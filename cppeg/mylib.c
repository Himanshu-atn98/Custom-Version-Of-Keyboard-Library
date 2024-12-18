int getStringLength(char *p)
{
int x;
for(x=0;*p;p++,x++);
return x;
}

void toUpperCase(char *p)
{
while(*p)
{
if(*p>=97 && *p<=122)
{
*p=*p-32;
}
p++;
}
}
 
void toLowerCase(char *p)
{
while(*p)
{
if(*p<=90 && *p>=65)
{
*p=*p+32;
}
p++;
}
}

void copyString(char *p,char *q)
{
while(*q)
{
*p=*q;
p++;
q++;
}
*p='\0';
}

void reverseString(char *p)
{
char temp;
char *q;
for(q=p+getStringLength(p)-1;p<q;p++,q--)
{
temp=*p;
*p=*q;
*q=temp;
}
}

void concatenateString(char *p,char *q)
{
copyString(p+getStringLength(p),q);
}
