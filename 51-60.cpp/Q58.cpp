//NAME : SANTANU SHAW
//COURSE: BTECH(CSE)
//SEC:(A) 
//ROLL NO: 56
    
    
#include<iostream>
using namespace std ;

class num{
    int *ptr;
    public:
    num(){
   // ptr=new int;
    *ptr = 10 ;
    cout<<"value:"<<*ptr<<endl;
    }
    ~num(){
        delete ptr;
        cout<<"memory freed"<<endl;
    }
};
    
    
int main(){
    
    
     num obj;
    
     return 0;
    
}