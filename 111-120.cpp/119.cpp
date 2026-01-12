//NAME : SANTANU SHAW
//COURSE: BTECH(CSE)
//SEC:(A) 
//ROLL NO: 56
    
    
#include<iostream>
using namespace std ;
 class cart{
    int price;
    string item;
    public:
    void getData(){
        price = 601;
        item = "Shopping Cart";
    }
    void showData(){
        cout<<"price : "<<price<<endl;
        cout<<"Cart item: "<<item<<endl;
    }
};
    
    
int main(){
    
     cart c;
     c.getData();
     c.showData();
    
     
    
     return 0;
    
}