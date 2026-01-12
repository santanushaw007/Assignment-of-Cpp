//NAME : SANTANU SHAW
//COURSE: BTECH(CSE)
//SEC:(A) 
//ROLL NO: 56
    
    
#include<iostream>
using namespace std ;
    
 class demo{
    public:
    static int count; // declared inside class

 }  ; 
  
 int demo::cout=0 //defined outside class
int main(){
    
   demo a , b ;
   demo::count=5;
   cout<<"count:"<<demo::count<<endl; // acess using class name

     
    
     return 0;
    
}