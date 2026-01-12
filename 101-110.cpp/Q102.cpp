//NAME : SANTANU SHAW
//COURSE: BTECH(CSE)
//SEC:(A) 
//ROLL NO: 56
    
    
#include<iostream>
using namespace std ;
    
 class base{
    public:
     virtual ~base(){
        cout<<"this is base destructor"<<endl;

    }
 } ;
 class derived : public base{
    public:
     ~derived(){
        cout<<"this is derived destructor"<<endl;
    }
 };        
    
int main(){
    
   base *b=new derived();
    delete b;

   
     
     
    
     return 0;
    
}