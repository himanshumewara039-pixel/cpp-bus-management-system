#include<iostream>
using namespace std;
void hi(string name="third")
{
    cout<<name<<endl;
    
};
int main()
{
    hi("first");
    hi("second");
    hi();
    hi("fourth");
}