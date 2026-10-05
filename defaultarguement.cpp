#include<iostream>
using namespace std;    
class hello
{ 
    public:
    int hi (int a = 10) 
    { 
        cout<<a<<endl;          

    }
};
int main()
{
    hello S1;
    hello S2;
    S1.hi(100);
    S2.hi(200);
    S2.hi();
}
