//NAME : SANTANU SHAW
//COURSE: BTECH(CSE)
//SEC:(A) 
//ROLL NO: 56
    
    
#include<iostream>
using namespace std ;
  

  void fun(){
        throw 10;
    }
    
    
int main(){
   try{
    fun();
 }
  catch(int x){
    cout<<"exeption caugth: "<<x<<endl;
  } 
    
     
    
     return 0;
    
}