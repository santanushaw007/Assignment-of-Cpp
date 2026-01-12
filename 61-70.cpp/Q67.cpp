//NAME : SANTANU SHAW
//COURSE: BTECH(CSE)
//SEC:(A) 
//ROLL NO: 56
    
    
#include<iostream>
using namespace std ;
    
 class complex{
    int real , img;
    public:
    complex(int r ,int i){
        real=r;
        img=i;
    }
    friend complex add(complex,complex);
    void show (){
        cout<<real <<"+"<<img<<"i"<<endl;
    }
 } ;  
 complex add(complex a , complex b){
    return complex(a.real + b.real , a.img +b.img);
 }   

int main(){
    
  complex c1(2,3),c2(5,6);
  complex c3 = add(c1,c2);
  c3.show();  
     
    
     return 0;
    
}