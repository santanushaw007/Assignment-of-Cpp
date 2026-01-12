//NAME : SANTANU SHAW
//COURSE: BTECH(CSE)
//SEC:(A) 
//ROLL NO: 56
    
    
#include<iostream>
using namespace std ;
 
class add{
    int x;
    public:
    add(int a){
        x=a;
    }
    friend add operator + (add a, add b);
    void show(){
        cout<<"result : "<<x<<endl;

    }
};
add operator + (add a, add b ){
    return add(a.x + b.x);
}
    
    
int main(){
    
   add a(5), b(10);
   add c = a+b;
   c.show(); 
     
    
     return 0;
    
}