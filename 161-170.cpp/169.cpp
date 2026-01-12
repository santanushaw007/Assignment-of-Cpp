//NAME : SANTANU SHAW
//COURSE: BTECH(CSE)
//SEC:(A) 
//ROLL NO: 56
    
    
#include<iostream>
using namespace std ;
    
    
    
int main(){
  int balance = 1000;
  int withdarw= 1500;
  
  try{
    if(withdarw>balance)
    throw"insufficient balance ";
    balance -= withdarw;
  }
 
     catch(const char *msg){
        cout<<msg<<endl;
     }
    
     return 0;
    
}
     
    