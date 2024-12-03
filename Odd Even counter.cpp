#include<iostream>
using namespace std;
int main(){
    int num, oddCount = 0, evenCount = 0;
    while(true){
        cout<<"Enter a number (0 to stop): ";
        cin>>num;

        if(num == 0){
            break;
        }
        if(num % 2 == 0){
            evenCount++;
        } 
		else{
            oddCount++;
        }
    }
    cout<<"Number of odd numbers: "<<oddCount<<endl;
    cout<<"Number of even numbers: "<<evenCount<<endl;
    return 0;
}
