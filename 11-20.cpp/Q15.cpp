//NAME : SANTANU SHAW 
//COURSE: BTECH(CSE)
//SEC: "A"
//ROLL NO: 56
#include <iostream>
using namespace std;
int main(){

    cout<<"--bitwise operators demonstration--"<<endl;
    int a = 5;  //binary: 0101
    int b = 3;  //binary: 0011
    cout<<"a = "<<a<<", b = "<<b<<endl;
    cout<<"a & b = "<<(a & b)<<endl; //bitwise AND
    cout<<"a | b = "<<(a | b)<<endl; //bitwise OR
    cout<<"a ^ b = "<<(a ^ b)<<endl; //bitwise XOR
    cout<<"~a = "<<(~a)<<endl;       //bitwise NOT
    cout<<"b << 1 = "<<(b << 1)<<endl; //left shift
    cout<<"a >> 1 = "<<(a >> 1)<<endl; //right shift
    return 0;
}