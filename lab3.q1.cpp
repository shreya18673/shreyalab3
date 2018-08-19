// Defining the library
#include<iostream>

using namespace std;

//The main function.
int main(){

//Datatype
int a;

//Assigning the value to the variable.
a=1;
char b;
b='f';
bool c;
c=true;
float d;
d=1.23456789;
double m;
m=1.234567891011121314151617181920;

//Print the values of the variables.
cout<<"a="<<a<<endl;
cout<<"b="<<b<<endl;
cout<<"c="<<c<<endl;
cout<<"d="<<d<<endl;
cout<<"m="<<m<<endl;

//Print the sizes of the variables.
cout<<"the size of"<<sizeof(a)<<endl;
cout<<"the size of"<<sizeof(b)<<endl;
cout<<"the size of"<<sizeof(c)<<endl;
cout<<"the size of"<<sizeof(d)<<endl;
cout<<"the size of"<<sizeof(m)<<endl;

//Return an integer value.
return 9;
}
