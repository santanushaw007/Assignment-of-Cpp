//NAME : SANTANU SHAW
//COURSE: BTECH(CSE)
//SEC:(A) 
//ROLL NO: 56
    
    
#include<iostream>
using namespace std ;
    
 class demo{
    public:
    static int count;
 } ;
 
 int demo::count=0;
    
int main(){
    
    demo a,b;
    demo::count=5;

    cout<<"cout value: "<< demo::count<<endl;
    
     
    
     return 0;
    
}