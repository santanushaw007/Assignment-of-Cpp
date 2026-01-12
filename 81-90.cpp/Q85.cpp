//NAME : SANTANU SHAW
//COURSE: BTECH(CSE)
//SEC:(A) 
//ROLL NO: 56
    
    
#include<iostream>
using namespace std ;
    
 class A{
    public:
    void showA(){
        cout<<"this is class A"<<endl;
    }
 };
 class B :public A {
    public:
    void showB(){
        cout<<"this is class B"<<endl;

    }
 } ;
 class C{
    public:
    void showC(){
        cout<<"this is class c"<<endl;

    }
 } ;
 
 class D: public B , public C
{

}; 
    
int main(){
    
   D obj;
   obj.showA();
   obj.showB();
   obj.showC(); 
     
    
     return 0;
    
}