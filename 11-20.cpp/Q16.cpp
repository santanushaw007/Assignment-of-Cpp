//NAME : SANTANU SHAW 
//COURSE: BTECH(CSE)
//SEC: "A"
//ROLL NO: 56

#include <iostream>
using namespace std;

int main(){
    cout<<" ---demonstration of increment and decrement operators--- "<<endl;
    int x = 10;
    cout<<"Initial value of x: "<<x<<endl;
    cout<<"Post-increment x: "<<x++<<endl; //prints 10, then x becomes 11
    cout<<"After post-increment, x: "<<x<<endl; //prints 11
    cout<<"Pre-increment x: "<<++x<<endl; //x becomes 12, then prints 12
    cout<<"After pre-increment, x: "<<x<<endl; //prints 12
    cout<<"Post-decrement x: "<<x--<<endl; //prints 12, then x becomes 11
    cout<<"After post-decrement, x: "<<x<<endl; //prints 11
    cout<<"Pre-decrement x: "<<--x<<endl; //x becomes 10, then prints 10
    cout<<"After pre-decrement, x: "<<x<<endl; //prints 10
    return 0;
}