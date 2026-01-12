//NAME : SANTANU SHAW
//COURSE: BTECH(CSE)
//SEC:(A) 
//ROLL NO: 56
    
    
#include<iostream>
using namespace std ;
    
class poly{
    int a ,b ,c;
    public:
    poly(int x, int y, int z){
        a=x;
        b=y;
        c=z;
    }
    void show(){
        cout<<a<<"x^2 + "<<b<<"x + "<<c<<endl;
    }
}  ;  
    
int main(){
    
    poly p(3,2,1);
    p.show();
    
     
    
     return 0;
    
}