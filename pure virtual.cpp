#include<iostream>
using namespace std;
class hello{
    public:
    mutable int num;
    void hi(int x)
    {
        num=x;
    }
    int hi2()const
    {
        return ++num;
    }
};
int main()
{
    hello s1;
    s1.hi(100);
    s1.hi2();
    cout<<s1.num<<endl;
}