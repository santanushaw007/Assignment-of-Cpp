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
    

add operator + (add a ){
    return add(x + a.x );
}
void show(){
    cout<<"result : 
    
    "<< x << endl;
}
};   
    
int main(){
    
   add a(5), b(10);
   add c = a+b;
   c.show(); 
     
    
     return 0;
    
}