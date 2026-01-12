//NAME : SANTANU SHAW
//COURSE: BTECH(CSE)
//SEC:(A) 
//ROLL NO: 56
    
    
#include<iostream>
using namespace std ;
    
    
    
int main(){
   try{
    
    throw 10;
   } 
   catch(int x){
    cout<<"integer exception caught :"<<x<<endl;
   }
    catch(double y){
    cout<<" double exception caught :"<<x<<endl;
   }
    
     
    
     return 0;
    
}

