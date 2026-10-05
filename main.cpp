#include<iostream>
using namespace std;
int main()
{
    int a[]= {10,20};
    int &b=a[0];

    cout<<a[1]<<endl;
    cout<<b<<endl;
}