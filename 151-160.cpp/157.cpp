//NAME : SANTANU SHAW
//COURSE: BTECH(CSE)
//SEC:(A) 
//ROLL NO: 56
    
    
#include<iostream>
using namespace std ;
    
class demo{
    public:
    demo(){
        throw "error in constructor";

    }
};  
    
int main(){
  
    try{
        demo d;
    }
    catch(catch char *msg){
        cout<<msg<<endl;
    }
    
     
    
     return 0;
    
}