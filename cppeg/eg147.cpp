#include<iostream>
using namespace std;
class IntArrayList
{
private:
int **x;
int bufferSize;
int collectionSize;
int allocatedSize;
public:
IntArrayList()
{
x=new int*[10];
x[0]=new int[10];
bufferSize=0;
collectionSize=10;
allocatedSize=10;
}
IntArrayList(const IntArrayList &other)
{
x=new int *[other.bufferSize];
for(int r=0;r<other.allocatedSize;r++)
{
x[r]=new int[10];
for(int c=0;c<=9;c++)
{
x[r][c]=other.x[r][c];
}
}
this->bufferSize=other.bufferSize;
this->collectionSize=other.collectionSize;
this->allocatedSize=other.allocatedSize;
}
IntArrayList & operator=(IntArrayList other)
{
for(int e=0;e<allocatedSize;e++)
{
delete []x[e];
}
delete []x;
x=new int *[other.bufferSize];
for(int r=0;r<other.allocatedSize;r++)
{
x[r]=new int[10];
for(int c=0;c<=9;c++)
{
x[r][c]=other.x[r][c];
}
}
this->bufferSize=other.bufferSize;
this->collectionSize=other.collectionSize;
this->allocatedSize=other.allocatedSize;
return *this;
}
~IntArrayList()
{
for(int e=0;e<allocatedSize;e++)
{
delete []x[e];
}
delete []x;
}
void add(int num)
{
int index=collectionSize%10;
int pointerIndex=collectionSize/10;
if(pointerIndex==allocatedSize)
{
if(bufferSize==allocatedSize)
{
int **t;
t=new int *[bufferSize+10];
for(int i=0;i<bufferSize;i++)
{
t[i]=x[i];
}
delete []x;
x=t;
bufferSize+=10;
}
x[pointerIndex]=new int[10];
allocatedSize++;
}
x[pointerIndex][index]=num;
collectionSize++;
}

int get(int i)
{
if(i<0||i>collectionSize) return 0;
int index=i%10;
int pointerIndex=i/10;
return x[pointerIndex][index];
}
int operator[](int i)
{
return get(i);
}
int getSize()
{
return collectionSize;
}
};
int main()
{
IntArrayList list1;
cout<<"**************** dummy populating starts ****************"<<endl;
for(int y=1;y<=34;y++)
{
list1.add(y);
}
cout<<"**************** dummy populating ends ****************"<<endl;
cout<<endl<<"printing collection in list1"<<endl;
for(int x=0;x<list1.getSize();x++)
{
cout<<list1[x]<<" ";
}
cout<<endl<<"Copying to another Array List"<<endl;
IntArrayList list2(list1);
list2.add(35);
cout<<endl<<"printing collection in list2"<<endl;
for(int x=0;x<list2.getSize();x++)
{
cout<<list2[x]<<" ";
}
cout<<endl<<"printing collection in list1"<<endl;
for(int x=0;x<list1.getSize();x++)
{
cout<<list1[x]<<" ";
}
IntArrayList list3;
list3.add(5443);
list3.add(1233);
list3.add(1234);
cout<<endl<<"Assigining to another Array List"<<endl;
list3=list2;
list3.add(36);
cout<<endl<<"printing collection in list"<<endl;
for(int x=0;x<list3.getSize();x++)
{
cout<<list3[x]<<" ";
}
return 0;
}
