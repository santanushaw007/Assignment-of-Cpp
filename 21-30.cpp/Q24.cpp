//NAME : SANTANU SHAW 
//COURSE: BTECH(CSE)
//SEC: "A"
//ROLL NO: 56

#include <iostream>
using namespace std;
int main(){
    //---programme for grading using if-else statement ----
    int marks;
    cout<<"Enter your marks: "; 
    cin>>marks;
    if(marks >= 0 && marks <= 100){
        if(marks >= 90){
            cout<<"Grade: A+"<<endl;
        }
        else if(marks >= 80){
            cout<<"Grade: A"<<endl;
        }
        else if(marks >= 70){
            cout<<"Grade: B+"<<endl;
        }
        else if(marks >= 60){
            cout<<"Grade: B"<<endl;
        }
        else if(marks >= 50){
            cout<<"Grade: C"<<endl;
        }
        else{
            cout<<"Grade: F"<<endl;
        }
    } else {
        cout<<"Invalid marks entered. Please enter marks between 0 and 100."<<endl;
    }
 
}