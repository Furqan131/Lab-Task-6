#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int withdraw, deposit, balance, fixed_balance=1000, choice;
	do{
	cout<<"Menu"<<endl;
	cout<<"Choose the options"<<endl;
	cout<<"1-Check Balance"<<endl;
	cout<<"2-Withdraw Money"<<endl;
	cout<<"3-Deposit Money"<<endl;
	cout<<"4-Exit"<<endl;
	cin>>choice;
	switch(choice){
	
	case 1:
		cout<<"Your Balance is: "<<balance+fixed_balance<<endl;
		break;
	case 2:
		if(balance>=1000){
		cout<<"Enter the amount of money you want to withdraw: ";
		cin>>withdraw;
		balance-=withdraw;
	}
		else{
			cout<<"Not Allowed";
		}
		break;
	case 3:
		cout<<"Enter the amount of money you want to Deposit:";
		cin>>deposit;
		balance+=deposit;
		break;
	case 4:
		cout<<"Exit";
		break;
	default:
		cout<<"Invalid";
} 
}
while(choice!=4);  
}
