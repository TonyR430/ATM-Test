#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
class Bank {

private:
    string name;
    int accnumber;
    char type[10];
    int amount = 0;
    int tot = 0;

public:
    void setvalue()
    {
        cout << "Enter name\n";
        cin.ignore();

        getline(cin, name);

        cout << "Enter Account Number: \n";
        cin >> accnumber;
        cout << "Enter Account Type\n";
        cin >> type;
        cout << "Enter Balance\n";
        cin >> tot;
    }

    void deposit(){
        cout << "\n Enter Amount to be Deposited \n";
        cin >> amount;
    }

    void showbal(){
        tot = tot + amount;
        cout << "\n Total Balance Is: " << tot;
    }

    void withdrawl()
    {
        int a, avai_balance;
        cout << "Enter Amount to Withdraw \n";
        cin >> a;
        avai_balance = tot - a;
        cout << "Available Balance is: " << avai_balance;
    }

    void showdata()
    {
        cout << "Name: " << name << endl;
        cout << "Account Number: " << accnumber << endl;
        cout << "Account Type: " << type << endl;
        cout << "Balance: " << tot << endl;
    }
};

int main()
{
    Bank b;
    int choice;

    while (1) {
        cout << " \n Welcome, What Kind Of Transaction Would You Like to Make Today? \n";
        cout << "Enter Your Choice \n ";
        cout << "\t1. Enter Name, Account Number, Account Type\n";
        cout << "\t2. Balance Enquiry\n";
        cout << "\t3. Deposit Money\n";
        cout << "\t4. Withdraw Money\n";
        cout << "\t5. Show Total Balance\n";
        cout << "\t6. Cancel\n";
        cin >> choice;

        switch (choice){
            case 1:
                b.setvalue();
                break;
            case 2:
                b.showdata();
                break;
            case 3:
                b.deposit();
                break;
            case 4:
                b.withdrawl();
                break;
            case 5:
                b.showbal();
                break;
            case 6:
                exit(1);
                break;
            default:
                cout << "\n Invalid Choice\n";
        }
    }
}