//NAME : SANTANU SHAW
//COURSE: BTECH(CSE)
//SEC:(A) 
//ROLL NO: 56
    
    
#include<iostream>
using namespace std ;
 class base{
    public:
    virtual void show(){
        throw"base error";
    }
 };
class derived : public base{
    public:
    void show(){
        throw"derived error"
    }
};
       
    
    
int main(){
   base *b=new derived();
   
   try{
    b->show();
   }
   catch(const char *msg){
    cout<<msg<<endl;
   }
    
     
    
     return 0;
    
}