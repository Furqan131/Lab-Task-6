#include<iostream>
using namespace std;
int main(){
    int choice;
    float num1, num2, result=0.0;
    do {
        cout<<"Simple Calculator Menu:\n";
        cout<<"1. Addition\n";
        cout<<"2. Subtraction\n";
        cout<<"3. Multiplication\n";
        cout<<"4. Division\n";
        cout<<"5. Exit\n";
        cout<<"Enter your choice: ";
        cin >> choice;
        switch(choice){
            case 1:
                cout<<"Enter two numbers: ";
                cin>>num1>>num2;
                result = num1 + num2;
                cout<<"Result: "<<num1<<" + "<<num2<<" = "<<result<<endl;
                break;
            case 2:
                cout<<"Enter two numbers: ";
                cin>>num1>>num2;
                result = num1 - num2;
                cout<<"Result: "<<num1<<" - "<<num2<<" = "<<result<<endl;
                break;
            case 3:
                cout<<"Enter two numbers: ";
                cin>>num1>>num2;
                result = num1 * num2;
                cout<<"Result: "<<num1<<" * "<<num2<<" = "<<result<<endl;
                break;
            case 4:
                cout<<"Enter two numbers: ";
                cin>>num1 >> num2;
                if(num2 == 0){
                    cout<<"Error: Division by zero is not allowed.\n";
                } 
				else{
                    result = num1 / num2;
                    cout<<"Result: "<<num1<<" / "<<num2<<" = "<<result<<endl;
                }
                break;
            case 5:
                cout<<"Exiting...\n";
                break;
            default:
                cout<<"Invalid choice. Please try again.\n";
        }
    } 
	while(choice != 5);
    return 0;
}
