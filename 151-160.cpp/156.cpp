//NAME : SANTANU SHAW
//COURSE: BTECH(CSE)
//SEC:(A) 
//ROLL NO: 56
    
    
#include<iostream>
using namespace std ;
    
    
    
int main(){
  
    try{
        try{
            throw 5;
        }
        catch(int x){
            cout<<"caugth inside: "<<x<<endl;
            throw; //rethrow
        }
    }
    catch(int x){
        cout<<"caugth outside: "<<x<<endl;
    }
     
    
     return 0;
    
}