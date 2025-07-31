#include <iostream>
#include <string>
using namespace std;

class BankAccount {
public:

    string name;
    string dob;
    string address;
    int phone;
    string accType;
    string ifsc;
    int accNumber;
    double balance;

    BankAccount() {
        name = "prathamesh";
        dob = "11/11/2000";
        address ="pune";
        phone = 1234567890;
        accType ="saving";
        ifsc = "3w554h5hy512";
        accNumber = 2133241;
        balance = 0;
    }

    BankAccount(string n, int accNo, string d, string addr, int ph, string type, string code, double bal) {
        name = n;
        accNumber = accNo;
        dob = d;
        address = addr;
        phone = ph;
        accType = type;
        ifsc = code;
        balance = bal;
    }

    BankAccount(BankAccount &obj) {
        name = obj.name;
        accNumber = obj.accNumber;
        dob = obj.dob;
        address = obj.address;
        phone = obj.phone;
        accType = obj.accType;
        ifsc = obj.ifsc;
        balance = obj.balance;
    }


    void createAccount() {
        cout << "Enter Name: ";
        cin>> name;
        cout << "Enter Account Number: ";
        cin >> accNumber;
        cout << "Enter DOB (dd/mm/yyyy): ";
        cin >> dob;
        cout << "Enter Address: ";
        cin>> address;
        cout << "Enter Phone Number: ";
        cin >> phone;
        cout << "Enter Account Type (Saving/Current): ";
        cin >> accType;
        cout << "Enter IFSC Code: ";
        cin >> ifsc;
        cout << "Enter Balance: ";
        cin >> balance;
    }

    void displayAccount() {
        cout << "Account Details"<< endl;
        cout << "Name: " << name << endl;
        cout << "Account No: " << accNumber << endl;
        cout << "DOB: " << dob << endl;
        cout << "Address: " << address << endl;
        cout << "Phone: " << phone << endl;
        cout << "Account Type: " << accType << endl;
        cout << "IFSC: " << ifsc << endl;
        cout << "Balance: " << balance << endl;
    }

    void deposit(double amount) {
        if (amount<0) {
            cout << "Invalid amount"<<endl;}
        else{
        balance += amount;
        cout << amount << "  amount deposited. New Balance = " << balance << endl;}
    }

void withdraw(double amount) {
    if (amount <= 0) {
        cout << "Invalid amount" << endl;
    } else if (amount > balance) {
        cout << "Insufficient balance" << endl;
    } else {
        balance -= amount;
        cout << amount << " amount withdrawn. New Balance = " << balance << endl;
    }
}

   
    void showBalance() {
        cout << "Current Balance: " << balance << endl;
 
    }
      ~BankAccount(){
      	cout<<endl<<"Accounts are destroyed";
	  }
};

int main() {
    BankAccount acc1;
   
    int choice=0;
    while(choice != 6) {
        cout << "Bank Account Management System"<<endl;
        cout << "1. Create New Account"<<endl;
        cout << "2. Display Account Information"<<endl;
        cout << "3. Deposit Amount"<<endl;
        cout << "4. Withdraw Amount"<<endl;
        cout << "5. View Current Balance"<<endl;
        cout << "6. Exit"<<endl;
        cout << "Enter your choice: "<<endl;
        cin >> choice;

        switch(choice) {
            case 1:
                acc1.createAccount();
                break;
            case 2:
                acc1.displayAccount();
                break;
            case 3: {
                double amt;
                cout << "Enter amount to deposit: ";
                cin >> amt;
                acc1.deposit(amt);
                break;
            }
            case 4: {
                double amt;
                cout << "Enter amount to withdraw: ";
                cin >> amt;
                acc1.withdraw(amt);
                break;
            }
            case 5:
                acc1.showBalance();
                break;
            case 6:

                break;
            default:
                cout << "Invalid choice"<<endl;
        }
       
    }

    BankAccount acc2 ("anuj", 12345, "28/11/2006", "Delhi", 32124, "Current", "IFSC0d3", 1000);
    acc2.displayAccount();

    BankAccount acc3(acc2);
    acc3.displayAccount();
    
    return 0;
}