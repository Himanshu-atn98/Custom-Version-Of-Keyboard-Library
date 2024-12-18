#include<iostream>
using namespace std;
int main()
{
int bold=1;
int italics=2;
int requiredFontSpecification;
cout<<"1. Bold(1)"<<endl;
cout<<"2. Italics(2)"<<endl;
cout<<"3. Bold+Italics(3)"<<endl;
cout<<"Enter your requirement in number:";
cin>>requiredFontSpecification;
if(requiredFontSpecification==bold)
{
cout<<"Bold required"<<endl;
}
else 
{
if(requiredFontSpecification==italics)
{
cout<<"Italics required"<<endl;
}
else 
{
if(requiredFontSpecification==bold|italics)
{
cout<<"Bold and Italics required"<<endl;
}
else
{
cout<<"Invalid choice:"<<requiredFontSpecification<<endl;
}
}
}
return 0;
}
