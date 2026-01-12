//NAME : SANTANU SHAW
//COURSE: BTECH(CSE)
//SEC:(A) 
//ROLL NO: 56
    
    
#include<iostream>
using namespace std ;
    
 class demo{
    int x;
    public:
    demo(int a){
        x=a;
    }
    void show() const{
        cout<<"value of x: "<<x <<endl;

    }
 }   ;
    
int main(){
    
 demo obj(10);
 obj.show();

     
    
     return 0;
    
}
