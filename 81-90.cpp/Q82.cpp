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
        cout<<"this is clid class"<<endl;
    }
 };  
 class grandchild : public child{
    public:
    void showgrandchild(){
        cout<<"this is grandclid class"<<endl;
    }
 };  
    
    
    
int main(){
    
     
  grandchild obj;
  obj.showparent();
  obj.showchild(); 
  obj.showgrandchild(); 

     
    
     return 0;
    
}