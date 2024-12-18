#include<stdio.h>

void printNewLineCharacter()
{
printf("\n");
}
class Monitor
{
public:
Monitor & operator<<(int x)
{
printf("%d",x);
return *this;
}
Monitor & operator<<(float x)
{
printf("%f",x);
return *this;
}
Monitor & operator<<(char x)
{
printf("%c",x);
return *this;
}
Monitor & operator<<(const char *x)
{
printf("%s",x);
}
 Monitor & operator<<(void (*f)())
{
f();
}
};
namespace tmstd
{
Monitor mout;
void(*newLine)()=printNewLineCharacter;
}
using namespace tmstd;
int main()
{
mout<<"Cool Implementation"<<newLine;
mout<<10<<","<<10.2f<<","<<'A'<<newLine;
return 0;
}