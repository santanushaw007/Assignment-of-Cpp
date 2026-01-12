//NAME : SANTANU SHAW
//COURSE: BTECH(CSE)
//SEC:(A) 
//ROLL NO: 56
    
    
#include<iostream>
using namespace std ;
class bill{
    int itemId;
    int quantity;
    float price;
    public:
    void getData(){
        itemId = 301;
        quantity = 2;
        price = 150.75;
    }
    void showData(){
        cout<<"Item ID: "<<itemId<<endl;
        cout<<"Quantity: "<<quantity<<endl;
        cout<<"Price: "<<price<<endl;
    } 
};    
    
    
int main(){
    
    bill b;
    b.getData();
    b.showData();
    
     
    
     return 0;
    
}