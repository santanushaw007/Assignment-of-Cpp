//NAME : SANTANU SHAW
//COURSE: BTECH(CSE)
//SEC:(A) 
//ROLL NO: 56
    
    
#include<iostream>
using namespace std ;
    
class num{
    public:
    void add( int a , int b){
        cout<<"sum:"<< a + b<<endl;
    }
    void add ( int a, int b , int c){
        cout<<"sum: "<<a + b + c <<endl;
    }
};

    
int main(){
    
  num obj;
  obj.add(1,2);
  obj.add(1,2,3);  
     
    
     return 0;
    
}