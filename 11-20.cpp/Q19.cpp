//NAME : SANTANU SHAW 
//COURSE: BTECH(CSE)
//SEC: "A"
//ROLL NO: 56


#include <iostream>
using namespace std;
int main(){
    // programme tro check leap year
    int year;
    cout<<"Enter a year: ";
    cin>>year;
    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
        cout<<year<<" is a leap year."<<endl;
    } else {
        cout<<year<<" is not a leap year."<<endl;
    }
    return 0;
}