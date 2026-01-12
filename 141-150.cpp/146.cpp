//NAME : SANTANU SHAW
//COURSE: BTECH(CSE)
//SEC:(A) 
//ROLL NO: 56
    
    
#include<iostream>
using namespace std ;
    
    
    
int main(){
   try{
    cout<<"inside try block"<<endl;
    throw 10;
   } 
   catch(int x){
    cout<<"exception caught :"<<x<<endl;
   }
    
     
    
     return 0;
    
}

