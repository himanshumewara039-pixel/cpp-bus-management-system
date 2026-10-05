// usage of constant data member and member function , static data member and member funtion 

#include<iostream>
using namespace std;

// class Student{
//     const int rollNumber;

//     public:
//     Student(int roll) : rollNumber(roll)
//     {

//     }
//     void display()
//     {
//         cout<<"The roll number is : "<<rollNumber<<endl;

//     }

// };

// class Student{
//      int rollNumber;

//     public:
//     Student(int roll) : rollNumber(roll)
//     {

//     }
//     void display() const
//     {
//         cout<<"The roll number is : "<<rollNumber<<endl;

//     }

// };


// int main()
// {
//     Student s1(1001);
//     s1.display();

//     return 0;
// }


class Demo
{
    static int count;

    public:
    Demo(){
        
        count++;

    }

    int display(){
        return count;

    }



};
int Demo::count=0;
int main(){
    Demo d1;
    cout<<"current object count is : "<<d1.display()<<endl;
    Demo d2;
    cout<<"current object count is : "<<d2.display()<<endl;
    Demo d3;
    cout<<"current object count is : "<<d3.display()<<endl;
    Demo d4;
    cout<<"current object count is : "<<d4.display()<<endl;


}  