//NAME : SANTANU SHAW
//COURSE: BTECH(CSE)
//SEC:(A) 
//ROLL NO: 56
    
    
#include<iostream>
using namespace std ;
    
 class number{
    public:
    int a,b;

 void largest(){
    if (a > b){
        cout<<" a is largest ";
    }
    else {
        cout <<" b is largest ";
    }
 }
 };
 
    
int main(){
  number num1;
  cin>>num1.a >> num1.b;

    num1.largest();
    
     
    
     return 0;
    
}