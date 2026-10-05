// write a program that take four no. from user and perform multiple task on it without repeating the variable or type you can perform percentage and average on it
#include<iostream>
using namespace std; 
union hello {
    int a;
    double b;
};
int main()
{
    union hello s1;
    s1.a=10;
    s1.b=20;
    cout<<s1.a<<endl;
    cout<<s1.b<<endl;

}