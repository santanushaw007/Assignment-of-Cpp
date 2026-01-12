//NAME : SANTANU SHAW
//COURSE: BTECH(CSE)
//SEC:(A) 
//ROLL NO: 56
    
    
#include<iostream>
using namespace std ;

class bank{
    int accNo;
    int balance;
    public:
    void create(){
        accNo=103;
        balance=1000;
    }
    void deposit(int amt){
        balance = balance + amt;
    }
    void show(){
        cout<<"account no: "<<accNo<<endl;
        cout<<"balance: "<<balance<<endl;

    }

};
    
    
int main(){
    
  bank b;
  b.create();
  b.deposit(500);
  b.show();
     
    
     return 0;
    
}