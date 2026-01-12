//NAME : SANTANU SHAW
//COURSE: BTECH(CSE)
//SEC:(A) 
//ROLL NO: 56
    
    
#include<iostream>
using namespace std ;
 
class father{
    public:
    void show(){
        cout<<"this is father class"<<endl;

    }
 } ;
 class mother {
    public:
    void show(){
        cout<<"this is mother class"<<endl;
    }
 }; 
  
 class child : public father , public mother{

 };
    
int main(){
    
  child obj;
   // obj.show();//error : ambiguity or confusion
    
     return 0;
    
}