#include<iostream>
using namespace std;
template<class whatever1,class whatever2>
whatever1 add(whatever1 x,whatever2 y)
{
whatever1 z;
z=x+y;
return z;
}
int main()
{
cout<<"Total of 10 and 20 is:"<<add(10,20)<<endl;
cout<<"Total of 10.2 and 20.3 is:"<<add(10.2f,20.3f)<<endl;
cout<<"Total of 10 and 20.3 is:"<<add(10,20.3f)<<endl;
cout<<"Total of 30.3 and 30 is:"<<add(30.3,30)<<endl;
return 0;
}