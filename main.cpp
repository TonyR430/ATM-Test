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
    int avai_balance = 0;

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
        cin >> avai_balance;
    }

    void deposit(){
        cout << "\n Enter Amount to be Deposited \n";
        cin >> amount;
        avai_balance = avai_balance + amount;
        cout << "Your current available balance is " << avai_balance << endl;
    }

    void showbal(){

        cout << "\n Total Balance Is: " << avai_balance;
    }

    void withdrawl()
    {
                cout << "Enter Amount to Withdraw \n";
        cin >> amount;
        avai_balance = avai_balance - amount;
        cout << "Your current available balance is " << avai_balance << endl;
    }

    void showdata()
    {
        cout << "Name: " << name << endl;
        cout << "Account Number: " << accnumber << endl;
        cout << "Account Type: " << type << endl;
        cout << "Balance: " << avai_balance << endl;
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
        cout << "\t5. Cancel\n";
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
                exit(1);
                break;
            default:
                cout << "\n Invalid Choice\n";
        }
    }
}