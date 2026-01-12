//NAME : SANTANU SHAW
//COURSE: BTECH(CSE)
//SEC:(A) 
//ROLL NO: 56
    
    
#include<iostream>
using namespace std ;

class student{
    public:
     int roll;

     void getroll(){
        roll=1;
    }
};

class marks : public student{
    public:
    int m1 , m2 ;
    void getmarks(){
        m1=50;
        m2=80;
    }
void show (){
    cout<<"the roll is : "<< roll <<endl;
    cout<<"the marks is : "<< m1 + m2 <<endl;
}
};   
    
int main(){
    
   marks obj;
   obj.getroll();
   obj.getmarks();
   obj.show(); 
     
    
     return 0;
    
}
