//NAME : SANTANU SHAW
//COURSE: BTECH(CSE)
//SEC:(A) 
//ROLL NO: 56
    
    
#include<iostream>
using namespace std ;
    
class customer{
    string custName;
    int amount;
    public:
    void getData(){
        custName = "Santanu Shaw";
        amount = 2500;
    }
    void showData(){
        cout<<"Customer Name: "<<custName<<endl;
        cout<<"Amount: "<<amount<<endl;
    }
}    ;
    
int main(){
    
    customer c;
    c.getData();    
    c.showData();
    
     
    
     return 0;
    
}