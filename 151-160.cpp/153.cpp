//NAME : SANTANU SHAW
//COURSE: BTECH(CSE)
//SEC:(A) 
//ROLL NO: 56
    
    
#include<iostream>
using namespace std ;
    
 class exception{};   
    
int main(){
  try{
            throw exception();
     }
    catch(exception)
    {
            cout<<"exception caugth: "<<endl;
           
    }  
    
     
    
     return 0;
    
}