//NAME : SANTANU SHAW
//COURSE: BTECH(CSE)
//SEC:(A) 
//ROLL NO: 56
    
    
#include<iostream>
using namespace std ;
 class A; // it makes them public
 class B;
class A{
int x=10;
friend void compare(A,B);
};
class B{
    int y =20;
    friend void compare(A,B);
};
void compare(A a , B b){
    if(a.x > b.y)
    cout<<"A is  bigger"<<endl;
    else
    cout<<"B is bigger"<<endl;
}
    
    
int main(){
    
   A a;
   B b;
   compare(a,b); 
     
    
     return 0;
    
}