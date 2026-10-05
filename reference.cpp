#include<iostream>
using namespace std;
int main ()
{
    int a=10;
    int &b=a;
    cout<<a<<endl;
    cout<<b<<endl;
b=20;
cout<<a<<endl;
cout<<b<<endl;
cout<<&a<<endl; 
cout<<&b<<endl;
int c=30;
cout<<c<<endl;
cout<<&c<<endl;
return 0;
}
