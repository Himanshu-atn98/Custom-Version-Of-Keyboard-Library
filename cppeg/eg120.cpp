#include<iostream>
using namespace std;
template<class whatever>
whatever add(whatever x,whatever y)
{
whatever z;
z=x+y;
return z;
}
int main()
{
cout<<"Total of 10 and 20 is:"<<add(10,20)<<endl;
cout<<"Total of 10.2 and 20.3 is:"<<add(10.2f,20.3f)<<endl;
return 0;
}