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
ArithmeticException(const char *message)
{
this->message=new char[strlen(message)+1];
strcpy(this->message,message);
}
ArithmeticException(const ArithmeticException &other)
{
this->message=new char[strlen(message)+1];
strcpy(this->message,other.message);
}
ArithmeticException & operator=(ArithmeticException other)
{
delete [] message;
this->message=new char[strlen(message)+1];
strcpy(this->message,other.message);
return *this;
}
virtual ~ArithmeticException() throw()
{
delete [] message;
}
virtual const char* what() const throw()
{
return this->message;
}

};

class Calculator
{
private:
Calculator() {}
public:
static float divide(int x,int y)
{
if(y==0) throw ArithmeticException("Exceptions raised:/by zero as divisor value");
return x/y;
} 
};

int main()
{
int x,y,z;
try
{
cout<<"Enter first number:";
cin>>x;
cout<<"Enter second number:";
cin>>y;
cout<<"Quotient:"<<x<<"/"<<y<<"="<<Calculator::divide(x,y)<<endl;
} catch(ArithmeticException & ae)
{
cout<<ae.what()<<endl;
}
catch(overflow_error &oe)
{
cout<<oe.what()<<endl;
}
return 0;
}