//NAME : SANTANU SHAW
//COURSE: BTECH(CSE)
//SEC:(A) 
//ROLL NO: 56
    
    
#include<iostream>
using namespace std ;
 
class B;
class A{
    int x=5;
    friend class B;
};
class B{
    public:
       void  show (A a){
        cout<<"value of x: "<< a.x<<endl;
       }
};
    
    
int main(){
    A a;
    B b;
    b.show(a);
    
     
    
     return 0;
    
}