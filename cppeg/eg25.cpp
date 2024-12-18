#include<iostream>
using namespace std;
class Movie
{
public:
void start()
{
cout<<"Welcome"<<endl;
}
void interval()
{
cout<<"Interval- Have coffee for Rs.50/-"<<endl;
}
void end()
{
cout<<"Thank You"<<endl;
}
};
class JungleBook:public Movie
{
public:
void interval()
{
 interval();
cout<<"Interval- Have Coke for Rs.25/-"<<endl;
}
void reelOne()
{
cout<<"Bagheera finds Mowgli"<<endl;
}
void reelTwo()
{
cout<<"Mowgli kills Sher Khan"<<endl;
}
};
int main()
{
JungleBook j;
cout<<"Size of object j is:"<<endl;
j.start();
j.reelOne();
j.interval();
j.reelTwo();
j.end();
return 0;
}