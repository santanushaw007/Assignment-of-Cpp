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
   
    base *arr[2];
    A a;
    B b;
    arr[0] =&a;
    arr[1]=&b;

    arr[0]->show();
    arr[1]->show();
    
     
    
     return 0;
    
}