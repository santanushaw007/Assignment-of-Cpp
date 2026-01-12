//NAME : SANTANU SHAW
//COURSE: BTECH(CSE)
//SEC:(A) 
//ROLL NO: 56
    
    
#include<iostream>
using namespace std ;
    
 class xyz {
    int x=10;
    friend void show(xyz , class pqr);

 }  ;
 class pqr {
    int y=56;
    friend void show(xyz,pqr);
 };
 void show(xyz obj1 , pqr obj2){
    cout<<"value of x : "<<obj1.x<<endl;
    cout<<"value of y : "<<obj2.y<<endl;

 } 
       
    
int main(){
    
  xyz obj1;
  pqr obj2;
  show(obj1,obj2);  
     
    
     return 0;
    
}