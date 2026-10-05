#include <iostream>
using namespace std;
class BankAccount
{
    int accountNo;
    string name;
    float balance;
public:
    void setDetails(int acc, string n, float b)
    {
        accountNo = acc;
        name = n;
        balance = b;
    }
    void deposit(float amount)
    {
        balance = balance + amount;
        cout << "Amount deposited successfully.\n";
    }
    void withdraw(float amount)
    {
        if (amount <= balance)
        {
            balance = balance - amount;
            cout << "Amount withdrawn successfully.\n";
        }
        else
        {
            cout << "Insufficient balance.\n";
        }
    }
    void display()
    {
        cout << "\nAccount Number: " << accountNo;
        cout << "\nName: " << name;
        cout << "\nBalance: " << balance << endl;
    }
};

int main()
{
    BankAccount b;
    b.setDetails(101, "Himanshu", 5000);
    b.display();
    b.deposit(2000);
    b.display();
    b.withdraw(3000);
    b.display();
    b.withdraw(10000);
    return 0;
}