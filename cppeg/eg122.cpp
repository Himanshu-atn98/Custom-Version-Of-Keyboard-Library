#include<iostream>
using namespace std;
int stack[100];
int lowerBound=0;
int upperBound=99;
int top=100;
int isEmpty()
{
//if(top==upperBound+1) return 1;
//else return 0;
return top==upperBound+1; 
}
int  isFull()
{
return top==lowerBound;
}
void push(int data)
{
if(isFull()) return;
top--;
stack[top]=data;
}
int pop()
{
int data;
if(isEmpty()) return 0;
data=stack[top];
top++;
return data;
}
int main()
{
push(10);
push(20);
push(30);
push(40);
while(!isEmpty())
{
cout<<pop()<<endl;
}
return 0;
}
