//NAME : SANTANU SHAW
//COURSE: BTECH(CSE)
//SEC:(A) 
//ROLL NO: 56
    
    
#include<iostream>
using namespace std ;
    
class calculator{
    public:
      int a;
      int b;

 void operations(){
    cout<<"enter two numbers : ";
    cin>>a>>b;
 }
 int add(){
    return a + b ;
 }
 int sub(){ return a-b;}
 int mul(){return a*b;}
 int div (){ return a/b;}
 
};
    
int main(){

    calculator operation1;
    
    operation1.operations();
    cout<<operation1.add();
    cout<<operation1.sub();
    cout<<operation1.mul();
    cout<<operation1.div();
    
    
     
    
     return 0;
    
}