#include<iostream>
using namespace std;
int main ()
{
    int *arr=new int[10]{1,2,3,4,5};
    for (int i=0;i<=4;i++)
    {
        cout<<arr[i]<<endl;
    }
    for (int i=0;i<=4;i++)
    {
        if(i == arr[0])
        {
            delete[] arr;
            continue;
        }
        cout<<arr[i]<<endl;
    }
}   
