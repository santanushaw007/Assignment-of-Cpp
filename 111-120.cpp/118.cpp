//NAME : SANTANU SHAW
//COURSE: BTECH(CSE)
//SEC:(A) 
//ROLL NO: 56
    
    
#include<iostream>
using namespace std ;
class engine{
    public:
    void start(){
        cout<<"Engine started"<<endl;
    }
};
class car{
    engine eng;
    public:
    void drive(){
        eng.start();
        cout<<"Car is driving"<<endl;
    }
};    
    
    
int main(){
     car c;
     c.drive();
     
    
     return 0;
    
}