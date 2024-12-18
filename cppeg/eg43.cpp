#include<iostream>
#include<string.h>
using namespace std;
class Person
{
private:
char name[21];
int age;
public:
void setName(const char *e)
{
strcpy(name,e);
}
void setAge(int e)
{
age=e;
}
int getAge()
{
return age;
}


char *getName()
{
return name;
}


/*
void getName(char *e)
{
strcpy(e,name);
}
*/
};

class Employee
{
private:
int employeeId;
public:
void setEmployeeId(int e)
{
employeeId=e;
}
int getEmployeeId()
{
return employeeId;
}
};

class Doctor:public Person,public Employee
{
private:
char type[51];
public:
void setType(const char *e)
{
strcpy(type,e);
}
void getType(char *e)
{
strcpy(e,type);
}
};

int main()
{
Doctor d;
d.setName("Himanshu");
d.setAge(23);
d.setEmployeeId(2031);
d.setType("Cardiologist");
char n[21],t[51];
int a,e;
d.getName(n); //strcpy(n,d.getName());
a=d.getAge();
e=d.getEmployeeId();
d.getType(t);
cout<<"Details of the doctor"<<endl;
cout<<"Name:"<<n<<endl;
cout<<"Age:"<<a<<endl;
cout<<"Employee Id:"<<e<<endl;
cout<<"Type:"<<t<<endl;
return 0;
}
