#include <iostream>
using namespace std;
class Mobile
{
    string brand;
    string model;
    float price;
public:
    Mobile(string b, string m, float p)
    {
        brand = b;
        model = m;
        price = p;
    }
    void display()
    {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Price: " << price << endl;
    }
    float getPrice()
    {
        return price;
    }
};
int main()
{
    Mobile m[5] = {
        Mobile("Samsung", "S24", 70000),
        Mobile("Apple", "iPhone 15", 80000),
        Mobile("OnePlus", "12", 60000),
        Mobile("Vivo", "X100", 65000),
        Mobile("Google", "Pixel 9", 75000)
    };
    int highest = 0;
    for (int i = 1; i < 5; i++)
    {
        if (m[i].getPrice() > m[highest].getPrice())
        {
            highest = i;
        }
    }
    cout << "Mobile with highest price:\n";
    m[highest].display();
    return 0;
}