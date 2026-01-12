//NAME : SANTANU SHAW
//COURSE: BTECH(CSE)
//SEC:(A) 
//ROLL NO: 56
    
    
#include<iostream>
using namespace std ;
    
    
    
int main(){
 string str = "10 20";
 stringstream ss(str);
 int a, b;
    ss >> a >> b;
    cout << "a: " << a << ", b: " << b << endl;
    cout << "Sum: " << (a + b) << endl;   
    
     
    
     return 0;
    
}