//NAME : SANTANU SHAW
//COURSE: BTECH(CSE)
//SEC:(A) 
//ROLL NO: 56
    
    
#include<iostream>
using namespace std ;
    
    
    
int main(){
  int age = -5;  
    
     try{
        if (age<0)
        throw"invalid age";
    cout<<"age is valid"<<endl;
     }
    catch(const char *msg){
        cout<<msg<<endl;
    }
     return 0;
    
}