//NAME : SANTANU SHAW
//COURSE: BTECH(CSE)
//SEC:(A) 
//ROLL NO: 56
    
    
#include<iostream>
using namespace std ;
    
    
    
int main(){
  
    int a=10 , b=10;
    try{
        if(a == b)
        throw "stack overflow";
    
    }
    
     catch(const char *msg){
        cout<<msg<<endl;
     }
    
     return 0;
    
}