#include <iostream>
#include <string>
using namespace std;

void showMenu()
{
    cout << "********** Menu **********" << endl
         << endl;
    cout << "1. Check Balance" << endl;
    cout << "2. Deposit" << endl;
    cout << "3. Withdraw" << endl;
    cout << "4. Exit" << endl
         << endl;
    cout << "**************************" << endl
         << endl;
}

int main()
{
    int option;
    double balance = 500;

    do
    {
        showMenu();
        cout << "Option: ";
        cin >> option;
        system("cls");

        switch (option)
        {
        case 1:
            cout << "Your Balance is " << balance << " $" << endl;
            break;

        case 2:
            cout << "Please Enter Deposit Amount: ";
            double deposit;
            cin >> deposit;

            balance += deposit;
            break;

        case 3:
            cout << "Please Enter Withdraw Amount: ";
            double withdraw;
            cin >> withdraw;
            if (withdraw <= balance)
            {
                balance -= withdraw;
                cout << "Withdraw Successful." << endl;
            }
            else
                cout << "Not Enough Money, Please Deposit Enough Money." << endl;
            break;
        }
    } while (option != 4);
}