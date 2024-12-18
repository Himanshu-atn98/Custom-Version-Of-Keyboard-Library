#include<iostream>
#include<stdexcept>
#include<string.h>
#include<climits>
using namespace std;
class ArithmeticException:public exception
{
private:
char *message;
public:
ArithmeticException(const char* message)
{
this->message=new char[strlen(message)+1];
strcpy(this->message,message);
}
ArithmeticException(const ArithmeticException &other)
{
this->message=new char[strlen(other.message)+1];
strcpy(this->message,other.message);
}
ArithmeticException & operator=(ArithmeticException other)
{
delete[] message;
this->message=new char[strlen(other.message)+1];
strcpy(this->message,other.message);
return *this;
}
virtual ~ArithmeticException () throw()
{
delete[] message;
}
virtual const char* what() const throw()
{
return this->message;
}
};

class Calculator
{
private:
Calculator()
{
}
public:
static float divide(int x,int y)
{
if(y==0) throw ArithmeticException("Exception raised: /by zero as divisor value");
return x/y;
}
static int multiply(int x,int y)
{
int z;
z=x*y;
if(z/y!=x) throw overflow_error("Product will exceed the int limit");
return z;
}
static int add(int x,int y)
{
int z=x+y;
if(x>0 && y>0 && z<0) throw overflow_error("Sum will exceed int limits");
if(x<0 && y<0 && z>0) throw underflow_error("Sum will go below int limits");
return z;
}
static int  substract(int x,int y)
{
int z=x-y;
return z;
}
};
int main()
{
int x,y,z;
try
{
cout<<"Enter First number:";
cin>>x;
cout<<"Enter Second number:";
cin>>y;
cout<<"Sum:"<<x<<"+"<<y<<"="<<Calculator::add(x,y)<<endl;
cout<<"Quotient:"<<x<<"/"<<y<<"="<<Calculator::divide(x,y)<<endl;
cout<<"Prodcut:"<<x<<"x"<<y<<"="<<Calculator::multiply(x,y)<<endl;
cout<<"Difference:"<<x<<"-"<<y<<"="<<Calculator::substract(x,y)<<endl;
}catch(ArithmeticException &ae)
{
cout<<ae.what()<<endl;
}
catch(overflow_error &oe)
{
cout<<oe.what()<<endl;
}
catch(...)
{
cout<<"Some problems"<<endl;
}
return 0;
}