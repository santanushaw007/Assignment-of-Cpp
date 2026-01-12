//NAME : SANTANU SHAW 
//COURSE: BTECH(CSE)
//SEC: "A"
//ROLL NO: 56

#include <iostream>
using namespace std;
int main(){
    //programme using while loop to print table//
    int num;
    cout<<"Enter a number to print its multiplication table: ";
    cin>>num;
    cout<<"Multiplication table of "<<num<<" is:"<<endl;

    int i = 1;
    while(i <= 10){
        cout<<num<<" x "<<i<<" = "<<num * i<<endl;
        i++;
    }   

    return 0;



}