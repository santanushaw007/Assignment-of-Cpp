//NAME : SANTANU SHAW 
//COURSE: BTECH(CSE)
//SEC: "A"
//ROLL NO: 56


#include <iostream>
using namespace std;
int main(){
    // ---programme to evaluate algebraic expression---
    double a, b, c, result;
    cout<<"Enter values for a, b, and c: ";
    cin>>a>>b>>c;
    result = (a + b) / c - (a * b);
    cout<<"The result of the expression (a + b) / c - (a * b) is: "<<result<<endl;
    return 0;
}