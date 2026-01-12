//NAME : SANTANU SHAW
//COURSE: BTECH(CSE)
//SEC:(A) 
//ROLL NO: 56
    
    
#include<iostream>
using namespace std ;
    
 class base{
    public:
     void show(){
        cout<<"this is base show"<<endl;

    }
 } ;
 class derived : public base{
    public:
     void show(){
        cout<<"this is derived show"<<endl;
    }
 };        
    
int main(){
    
   derived obj;
   obj.show();
   
     
     
    
     return 0;
    
}