//NAME : SANTANU SHAW
//COURSE: BTECH(CSE)
//SEC:(A) 
//ROLL NO: 56
    
    
#include<iostream>
using namespace std ;
 class parent{
    public:
    parent(){
        cout<<"this is parent constructor"<<endl;

    }
 } ;
 class child : public parent{
    public:
    child(){
        cout<<"this is chlid constructor"<<endl;
    }
 };  
    
    
int main(){
    
  child obj;
  
    
     return 0;
    
}