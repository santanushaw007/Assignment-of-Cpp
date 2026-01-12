//NAME : SANTANU SHAW
//COURSE: BTECH(CSE)
//SEC:(A) 
//ROLL NO: 56
    
    
#include<iostream>
using namespace std ;
    
class parent{
    public:
    int x=10;

 } ;
 class child :public parent{
    public:
    void showchild(){
        cout<<"the value of x :"<<x<<endl;
    }
 };      
    
int main(){
    
   child obj;

  obj.showchild();   
     
    
     return 0;
    
}