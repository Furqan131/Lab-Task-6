#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int num, choice, total_bill=0;
	do{
	
	cout<<"Menu";
	cout<<"Choose the items you want to order"<<endl;
	cout<<"1-Tea - $2"<<endl;
	cout<<"2-Coffee - $3"<<endl;
	cout<<"3-Sandwich - $5"<<endl;
	cout<<"4-Burger - $7"<<endl;
	cout<<"5-Exit"<<endl;
	cin>>choice;
	switch(choice){
	
	case 1:
		cout<<"You choose Tea - $2";
		total_bill+=2;
		break;
	case 2:
		cout<<"You choose Coffee - $3";
		total_bill+=3;
		break;
	case 3:
		cout<<"You choose Sandwich - $5";
		total_bill+=5;
		break;
	case 4:
		cout<<"You choose Burger - $7";
		total_bill+=7;
		break;
	case 5:
		cout<<"Exit";
		break;
	default:
		cout<<"Invalid";
} 
}
while(choice!=5);
cout<<"Total Bill: "<<total_bill;   
}
