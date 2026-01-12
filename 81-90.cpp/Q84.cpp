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

 class child1 : public parent{
    public:
    void showchild1(){
        cout<<"this is chlid1 class"<<endl;
    }
 };  
 class child2 : public parent{
    public:
    void showchild2(){
        cout<<"this is chlid2 class"<<endl;
    }
 };  
    
int main(){
    
  child1 obj1;
  child2 obj2;
  
  obj1.showparent();
  obj1.showchild1();

  obj2.showparent();
  obj2.showchild2();
     
    
     return 0;
    
}