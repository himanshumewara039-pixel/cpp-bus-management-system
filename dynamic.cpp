#include<iostream>
using namespace std;
int main()
{
    int *arr=new int[10]{1,2,3,4};
    {
        arr[2]=100;
        for(int i=0;i<=3;i++)
        {
            cout<<arr[i]<<endl;
        }
        delete[] arr;
        for(int i=0;i<=3;i++)
        {
            cout<<arr[i]<<endl;
        }
    }
}
