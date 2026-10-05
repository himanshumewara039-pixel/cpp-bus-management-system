#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    int user,i;
    cout<<"enter the table number"<<endl;
    cin>>user;
    ofstream s1("section_B.txt");
    for(i=1;i<=10;i++)
    {
        s1<<user<<"*"<<i<<"="<<user*i<<endl;
    }
    s1.close();
}
