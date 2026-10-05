#include<iostream>
using namespace std;
class A{
    protected:
    int m1;
    void get_m1()
    {
        cout<<"Enter the marks of physics :";
        cin>>m1;
    
    }
};
class B{
    protected:
    int m2;
    void get_m2()
    {
        cout<<"Enter the marks of chemistry :";
        cin>>m2;
    
    }
};
class C{
    protected:
    int m3;
    void get_m3()
    {
        cout<<"Enter the marks of mathematics:";
        cin>>m3;
    
    }
};
class D:public A, public B, public C
{  int n , total;
    double per;
    string name;
   public:
   void input (){
     cout<<"Enter the Number of Students:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
      cout<<"Enter the name of Student :";
      cin>>name;
      get_m1();
      get_m2();
      get_m3();
      total=m1+m2+m3;
      per=(total/300)*100;
      cout<<"\nThe name of student is :"<<name <<endl;
            cout<<"\nThe total marks of student is :"<<total<<endl;
             cout<<"\nThe percentage of student is :"<<per<<endl;

    }
   }

};

int main(){
    D d;
    d.input();
    return 0;
}