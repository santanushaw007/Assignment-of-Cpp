//NAME : SANTANU SHAW
//COURSE: BTECH(CSE)
//SEC:(A) 
//ROLL NO: 56
    
    
#include<iostream>
using namespace std ;

void test() throw(int){
    throw 5;
}
    
    
int main(){
    try{
        test();

    }
    catch(int x){
        cout<<"exception : "<<x<<endl;
        
    }
     
    
     return 0;
    
}