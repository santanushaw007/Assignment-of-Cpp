//NAME : SANTANU SHAW
//COURSE: BTECH(CSE)
//SEC:(A) 
//ROLL NO: 56
    
    
#include<iostream>
using namespace std ;
    
 class num{
    int x , y ;
    
    public :
     // normal constructor
     num(int a , int b  ){
      x=a;
      y=b;
     }
     // copy constructor
      num(const num &n  ){
      x=n.x;
      y=n.y;
     }
    void show(){
        cout << "x :"<< x <<endl;
          cout   << "y: "<< y <<endl;
          
              
    }
};   
    
int main(){
    num n1= num(90 , 80 );

    num n2 = num( n1);

    cout<<" n1 : ";
     n1.show();

     cout <<"n2: ";
     n2.show();
    
     
    
     return 0;
    
}