#include<iostream>
#include<stdio.h>
using namespace std;

class Bank_acc{
    string name;
    int acc_no;
    int ph_no;
    string acc_type;
    string ifsc;
    double bal;
public:
    Bank_acc(string n,int acc_n,int ph_n,string acc_t,string ifs,double b){
        name=n;
        acc_no=acc_n;
        ph_no=ph_n;
        acc_type=acc_t;
        ifsc=ifs;
        bal=b;}
        
	Bank_acc(Bank_acc &obj){
        name=obj.name;
        acc_no=obj.acc_no;
        ph_no=obj.ph_no;
        acc_type=obj.acc_type;
        ifsc=obj.ifsc;
        bal=obj.bal;

	}
    Bank_acc(){
    }
    void display(){
        cout<<"Customer name:"<<name<<endl;
        cout<<"Account number:"<<acc_no<<endl;
        cout<<"Account type:"<<acc_type<<endl;
        cout<<"Customer phone number:"<<ph_no<<endl;
        cout<<"IFSC:"<<ifsc<<endl;
        cout<<"Account balance:"<<bal<<endl;
    }

    int show_bal(){
        return bal;
    }
    void create(){
        cout<<endl<<"Enter name"<<endl;
        cin>>name;
        cout<<"Enter Account number"<<endl;
        cin>>acc_no;
        cout<<"Enter Phone number"<<endl;
        cin>>ph_no;
        cout<<"Enter account type"<<endl;
        cin>>acc_type;
        cout<<"Enter IFSC"<<endl;
        cin>>ifsc;
        cout<<"Enter balance"<<endl;
        cin>>bal;
    }

    void withdraw(double w_amt){
    	if (w_amt >bal && w_amt<0){
    		cout<<"Invalid amount"<<endl;}
    		
		else{
			bal=bal-w_amt;
			cout<<endl<<w_amt<<" has been withdrawn form the account";}}
	void deposit(double d_amt){
    	if (d_amt<0){
    		cout<<"Invalid amount"<<endl;}
    		
		else{
			bal=bal+d_amt;
			cout<<endl<<d_amt<<" has been deposit in the account";}}
};


int main(){
    Bank_acc obj;
    while(1){
        cout<<"\nEnter a choice"<<endl<<"1 to create an account\n2 Display balance\n3 Display Account\n4 to Withdraw\n5 to Deposit\n6 Exit\n7 to make a copy of account"<<endl;
        int choice;
        cin>>choice;

        switch(choice){
            case 1:
            	obj.create();
                break;

            case 2:
                cout<<endl<<"Balance:"<<obj.show_bal()<<endl;
                break;

            case 3:
                obj.display();
                break;
        
        	case 4:
        		double w_amt;
        		cout<<"Enter amount to withdraw"<<endl;
        		cin>>w_amt;
        		obj.withdraw(w_amt);
				break;
			case 5:
				double d_amt;
        		cout<<"Enter amount to deposit"<<endl;
        		cin>>d_amt;
        		obj.deposit(d_amt);
				break;
				}

        if(choice==6){
            break;}
        if(choice==7){
        	Bank_acc obj1(obj);
			obj1.display();}
    }

    return 0;
	}