//NAME : SANTANU SHAW
//COURSE: BTECH(CSE)
//SEC:(A) 
//ROLL NO: 56
    
    
#include<iostream>
using namespace std ;
 class parent{
    public:
    void showparent(){
        cout<<"this is parent class"<<endl;

    }
 } ;
 class child : public parent{
    public:
    void showchild(){
        cout<<"this is chlid class"<<endl;
    }
 };  
    
    
int main(){
    
  child obj;
  obj.showparent();
  obj.showchild();  
     
    
     return 0;
    
}