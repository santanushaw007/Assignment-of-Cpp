//NAME : SANTANU SHAW
//COURSE: BTECH(CSE)
//SEC:(A) 
//ROLL NO: 56
    
    
#include<iostream>
using namespace std ;
 
   
 class base{
    public:
     void show(){
        cout<<"this is base class"<<endl;

    }
 } ;
 class A : public base{
    public:
    void show(){
        cout<<"class A"<<endl;

    }
 };
 class B: public base{
    public:
    void show(){
        cout<<"class B"<<endl;
    }
 };

    
    
int main(){
   
    base *n;
    A a;
    B b;
    n =&a;
    n=&b;

   n->show();
    n ->show();
    
     
    
     return 0;
    
}