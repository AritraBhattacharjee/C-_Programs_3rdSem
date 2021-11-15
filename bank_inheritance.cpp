/*
4.Assume that a bank maintains two kind of accounts for customers, one called as savings account and the other as current account. The savings account provides compound interest and withdrawal facilities but no cheque book facility. The current account provides cheque book facility but no interest. Current account holders should also maintain a minimum balance and if the balance falls below this level, a service charge is imposed. 
Create a class account that stores customer name, account number and type of account. From this derive the classes cur_acct and sav_acct to make them more specific to their requirements. Include necessary member functions in order to achieve the following tasks:
a.	Accept deposit from a customer and update the balance.
b.	Display the balance.
c.	Compute and deposit interest.
d.	Permit withdrawal and update the balance.
e.	Check for the minimum balance, impose penalty, necessary, and update the balance.
*/

#include <iostream>
#include <string>
#include <math.h>
using namespace std;

class account
{
     string name;
     int account_number;

public:
     int type_account;
     void getData()
     {
          cout << "Enter the name of the customer : ";
          cin >> name;
          cout << endl
               << "Enter the account number : ";
          cin >> account_number;
          cout << endl
               << "Enter the type of account." << endl
               << "\t1. Savings Account\t2. Current Account" << endl;
          cin >> type_account;
     }
};

class savings_account : private account
{
     float current_balance, new_balance, deposits, cashout, time, interest, amount, n;

public:
     void deposit()
     {
          current_balance = 57650.60;
          cout << "\nThe current balance is : Rs. " << current_balance << endl;
          cout << "\nEnter the deposit aamount : Rs. ";
          cin >> deposits;
          new_balance = deposits + current_balance;
          current_balance = new_balance;
          cout << "\nUpdated Balance : Rs. " << current_balance << endl;
     }

     void interest_savs()
     {
          cout << endl
               << "Enter the time period for interest :  ";
          cin >> n;
          cout << endl
               << "Enter the number of time periods(1 for annully, 2 for half-yearly,4 for quarterly : ";
          cin >> time;
          interest = current_balance * pow((1 + (0.06 / n)), n * time);
          cout << endl
               << "The interest applicable for Rs." << current_balance << " for " << n << " years compounded " << time << " times is : Rs. " << interest;
          amount = interest + current_balance;
          cout << endl
               << "Interest is being deposited...." << endl;
          cout << endl
               << "Current Balance : Rs. " << amount;
     }

     void withdrawl()
     {
          cout << endl
               << "Enter the amount for withdrawl : Rs. ";
          cin >> cashout;
          if (cashout > current_balance)
          {
               cout << endl
                    << "Insufficient Balance. Withdrawl not possible." << endl
                    << "Your current Balance is : Rs. " << current_balance;
          }
          else
          {
               cout << endl
                    << "Transaction Successful .....";
               current_balance = current_balance - cashout;
               cout << endl
                    << "Balance amount : Rs. " << current_balance;
          }
     }

     void cheque()
     {
          cout << endl
               << "No cheque facility is provided for savings account holding customers.";
     }
};

class current_account : private account
{
     float current_balance, new_balance, deposits, cashout, time, interest, amount, n, penal;

public:
     void deposit()
     {
          current_balance = 57650.60;
          cout << endl
               << "The current balance is : Rs. " << current_balance << endl;
          cout << endl
               << "Enter the deposit aamount : Rs. ";
          cin >> deposits;
          new_balance = deposits + current_balance;
          current_balance = new_balance;
          cout << endl
               << "Updated Balance : Rs. " << current_balance << endl;
     }

     void interest_curr()
     {
          cout << endl
               << "Interest is not available for current account holding customers.";
     }

     void withdrawl()
     {
          cout << endl
               << "Enter the amount for withdrawl : Rs. ";
          cin >> cashout;
          if (cashout > current_balance)
          {
               cout << endl
                    << "Insufficient Balance. Withdrawl not possible." << endl
                    << "Your current Balance is : Rs. " << current_balance;
          }
          else
          {
               cout << endl
                    << "Transaction Successful .....";
               current_balance = current_balance - cashout;
               cout << endl
                    << "Balance amount : Rs. " << current_balance;
          }
     }

     void cheque()
     {
          cout << endl
               << "Cheque facility is available for you. Please drop the cheque here....";
     }

     void penalty()
     {
          if (current_balance > 10000)
          {
               penal = 0.00;
               cout << endl
                    << "You have maintained a minimum balance. No penalty money from you.";
          }
          else
          {
               penal = 1000;
               cout << endl
                    << "Upon failing to maintan a minimum balance of Rs. 10000, \nwe are imposing a penalty of Rs. " << penal;
          }
     }
};
int main()
{
     int choice;
     account a1;
     a1.getData();
     if (a1.type_account == 1)
     {
          savings_account s1;
          cout << endl
               << "Press 1 for money deposit \t Press 2 for withdrawal of money\n Press 3 for interest addition \t Press 4 for dropping cheque\nPress 5 for exit." << endl;
          cin >> choice;
          while (choice != 5)
          {
               switch (choice)
               {
               case 1:
                    s1.deposit();
                    break;

               case 2:
                    s1.withdrawl();
                    break;

               case 3:
                    s1.interest_savs();
                    break;

               case 4:
                    s1.cheque();
                    break;

               default:
                    cout << "Incorrect Option. Please try again." << endl;
                    break;
               }

               cout << endl
                    << "Press 1 for money deposit \t Press 2 for withdrawal of money\n Press 3 for interest addition \t Press 4 for dropping cheque\nPress 5 for exit." << endl;
               cin >> choice;
          }

     }
     else if (a1.type_account == 2)
     {
          current_account c1;
          cout << endl
               << "Press 1 for money deposit \t Press 2 for withdrawal of money\n Press 3 for interest addition \t Press 4 for dropping cheque\nPress 5 for exit." << endl;
          cin >> choice;
          while (choice != 5)
          {
               switch (choice)
               {
               case 1:
                    c1.deposit();
                    break;

               case 2:
                    c1.withdrawl();
                    break;

               case 3:
                    c1.interest_curr();
                    break;

               case 4:
                    c1.cheque();
                    break;

               default:
                    cout << "Incorrect Option. Please try again." << endl;
                    break;
               }

               cout << endl
                    << "Press 1 for money deposit \t Press 2 for withdrawal of money\n Press 3 for interest addition \t Press 4 for dropping cheque\nPress 5 for exit." << endl;
               cin >> choice;
          }
     }

     else
     cout<<endl<<"Incorrect Account choice."<<endl;

     return 0;
}
