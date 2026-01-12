//NAME : SANTANU SHAW
//COURSE: BTECH(CSE)
//SEC:(A) 
//ROLL NO: 56
    
    
#include<iostream>
#include<string>
using namespace std ;
    
 class car
 {
    public:
     string model;
     int wheels;

    car(string m, int w)
    {
        model=m;
       wheels=w;
    }
 };

    
int main(){
    
 car toyota=car("M1",4);
 cout<<toyota.model;   
     
    
     return 0;
    
}