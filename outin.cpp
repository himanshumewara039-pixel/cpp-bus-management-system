#include<iostream>
using namespace std;
class hello{
    private:
    int aa;
    int bb;
    public:
    void hi();
    void hi2();

};
void hello::hi(){

    cout<<"Enter the value of a"<<endl;
    cin>>aa;
    cout<<"Enter the value of b"<<endl;
    cin>>bb;
}
void hello::hi2(){
    cout<<"The value of a is "<<aa<<endl;
    cout<<"The value of b is "<<bb<<endl;
}
int main()
{
    hello s1;
    s1.hi();
    s1.hi2();
}