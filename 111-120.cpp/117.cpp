//NAME : SANTANU SHAW
//COURSE: BTECH(CSE)
//SEC:(A) 
//ROLL NO: 56
    
    
#include<iostream>
using namespace std ;
    
class product{
    int prodId;
    string prodName;
    public:
    void getData(){
        prodId = 401;
        prodName = "Laptop";
    }
    void showData(){
        cout<<"Product ID: "<<prodId<<endl;
        cout<<"Product Name: "<<prodName<<endl;
    } 
};    
    
int main(){
    
    product p;
    p.getData();
    p.showData();
    
    
     return 0;
    
}