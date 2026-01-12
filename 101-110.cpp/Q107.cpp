//NAME : SANTANU SHAW
//COURSE: BTECH(CSE)
//SEC:(A) 
//ROLL NO: 56
    
    
#include<iostream>
using namespace std ;
 
class shape{
    public:
    virtual void area()=0;
};
class square : public shape{
    public:
    void area(){
        cout<<"area of square = side * side"<<endl;
    }
};
    
    
int main(){
    
  shape *s;
  square sq;
  s= &sq;
  s->area();  
     
    
     return 0;
    
}