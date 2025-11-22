//NAME : SANTANU SHAW 
//COURSE: BTECH(CSE)
//SEC: "A"
//ROLL NO: 56

#include <iostream>
using namespace std;
int main(){

   cout<<"--type casting demonstration--"<<endl;
    int a=5, b=2;
    float result1;
    result1= (float)a/b; //type casting of integer to float
    cout<<"Result of (float)a/b: "<<result1<<endl;  
    float x=5.7, y=2.3;
    int result2;

    result2= (int)x + (int)y; //type casting of float to integer
    cout<<"Result of (int)x + (int)y: "<<result2<<endl;
    return 0;
    
}