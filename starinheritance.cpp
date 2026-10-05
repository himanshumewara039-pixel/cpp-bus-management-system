#include<iostream>
using namespace std;
class a{
    public:
    int a=10;

};
class b:public a{
    public:
    int b=20;
};
class c:public virtual a{
    public:
    int c=30;
};
class d:public b,public c{
    public:
    int d=40;
};
int main()
{
    d s4;
    cout<<s4.b::a<<endl;
}
