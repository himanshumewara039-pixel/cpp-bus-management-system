#include<iostream>
using namespace std;
class hello{
    public:
    virtual void hi()
    {
        cout<<"parent class"<<endl;
    }
};
class hello2: public hello{
    public:
    virtual void hi()
    {
        cout<<"child 1"<<endl;
    
    }
};
class hello3: public hello{
    public:
    virtual void hi()
    {
        cout<<"child 2"<<endl;
    }
};
int main()
{
    hello* s1;
    hello2 s2;
    s1=&s2;
    s1->hi();
    hello3 s3;
    s1=&s3;
    s1->hi();
}
