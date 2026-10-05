#include<iostream>
using namespace std;
class hello{
    private:
    int aa;
    int bb;
    public:
    void hi(int a, int b);
    void hi2(int a, int b);

};
void hello::hi(int a, int b){

    cout<<"Enter the value of a"<<endl;
    cin>>a;
    cout<<"Enter the value of b"<<endl;
    cin>>b;
}
void hello::hi2(int a, int b){
    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of b is "<<b<<endl;
}
int main()
{
    hello s1;
int aa = 10, bb = 20;

s1.hi(aa, bb);
s1.hi2(aa, bb);
}