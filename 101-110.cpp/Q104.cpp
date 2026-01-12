//NAME : SANTANU SHAW
//COURSE: BTECH(CSE)
//SEC:(A) 
//ROLL NO: 56
    
    
#include<iostream>
using namespace std ;
    
 class base{
    public:
     virtual void print(){
        cout<<"this is base print"<<endl;

    }
 } ;
 class derived : public base{
    public:
     void print(){
        cout<<"this is derived print"<<endl;
    }
 };        
    
int main(){
    
    base *b;
    derived d;
    b =&d;
    b->print();

   
     
     
    
     return 0;
    
}
