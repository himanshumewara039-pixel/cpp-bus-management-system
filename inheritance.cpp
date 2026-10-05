#include<iostream>
using namespace std;
class hello{
    public:
    int a =10;
};
class hello2:public hello{
    public:
    int a=20;
    int b=20;
    void hi(){
        cout<<"multilevel inhertance "<<a+b<<endl;
    }
};
class hello3:public hello{
    public:
    int c=30;
    void hi(){
        cout<<"multilevel inhertance "<<a+c<<endl;
    }
};

int main()
{
    hello3 s3;
    s3.hi();
    hello2 s2;
    s2.hi();
}

