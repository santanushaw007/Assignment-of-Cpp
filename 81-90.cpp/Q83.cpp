//NAME : SANTANU SHAW
//COURSE: BTECH(CSE)
//SEC:(A) 
//ROLL NO: 56
    
    
#include<iostream>
using namespace std ;
 
class father{
    public:
    void showfather(){
        cout<<"this is father class"<<endl;

    }
 } ;
 class mother {
    public:
    void showmother(){
        cout<<"this is mother class"<<endl;
    }
 }; 
  
 class child : public father , public mother{

 };
    
int main(){
    
  child obj;
  obj.showfather();
  obj.showmother();  
     
    
     return 0;
    
}