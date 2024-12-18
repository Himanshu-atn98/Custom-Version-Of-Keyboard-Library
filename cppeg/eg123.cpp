#include<iostream>
using namespace std;
class Stack
{
private:
int stack[100];
int lowerBound;
int upperBound;
int top;
public:
Stack();
int isEmpty();
int isFull();
void push(int);
int pop();
};
Stack::Stack()
{
lowerBound=0;
upperBound=99;
top=100;
}
int Stack::isEmpty()
{
return top==upperBound+1;
}
int Stack::isFull()
{
return top==lowerBound;
}
void Stack::push(int data)
{
if(isFull()) return;
top--;
stack[top]=data;
}
int Stack::pop()
{
int data;
if(isEmpty()) return 0; 
data=stack[top];
top++;
return data;
}
int main()
{
Stack s1,s2;
s1.push(10);
s1.push(20);
s1.push(30);
s1.push(40);
s2.push(100);
s2.push(200);
s2.push(300);
while(!s1.isEmpty())
{
cout<<s1.pop()<<endl;
}
cout<<endl;
while(!s2.isEmpty())
{
cout<<s2.pop()<<endl;
}
return 0;
}