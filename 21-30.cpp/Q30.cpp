//NAME : SANTANU SHAW 
//COURSE: BTECH(CSE)
//SEC: "A"
//ROLL NO: 56

#include <iostream>
using namespace std;
int main(){
    // programme to show use  of goto statement
    int num;
    cout<<"Enter a number between 1 to 5: ";
    cin>>num;
    switch(num){
        case 1:
            cout<<"You entered One"<<endl;
            break;
        case 2:
            cout<<"You entered Two"<<endl;
            break;
        case 3:
            cout<<"You entered Three"<<endl;
            break;
        case 4:
            cout<<"You entered Four"<<endl;
            break;
        case 5:
            cout<<"You entered Five"<<endl;
            break;
        default:
            goto invalid; //goto statement to jump to invalid label
    }
    invalid:
        cout<<"Invalid input! Please enter a number between 1 to 5."<<endl;
    return 0;
}