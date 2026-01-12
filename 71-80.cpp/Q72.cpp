//NAME : SANTANU SHAW
//COURSE: BTECH(CSE)
//SEC:(A) 
//ROLL NO: 56
    
    
#include<iostream>
using namespace std ;
  
class memo{
    public:
    static int x;
    static void show(){
        cout<<"value of x :"<<x<<endl;

    }
};
int memo::x=10;
    
    
int main(){
    
    memo::show();
     
    
     return 0;
    
}