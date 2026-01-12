//NAME : SANTANU SHAW
//COURSE: BTECH(CSE)
//SEC:(A) 
//ROLL NO: 56
    
    
#include<iostream>
using namespace std ;
    
    
    
int main(){
  
    int a=10 , b=0;
    try{
        if(b == 0)
        throw "divide by zero error";
    cout<<a/b<<endl;
    }
    
     catch(const char *msg){
        cout<<msg<<endl;
     }
    
     return 0;
    
}