//NAME : SANTANU SHAW
//COURSE: BTECH(CSE)
//SEC:(A) 
//ROLL NO: 56
    
    
#include<iostream>
using namespace std ;
 
class box{
    int length , height , bredth ;
    
    public :
    // default constructor 
     box(){
        length = height = bredth = 0 ;
     }
     // overloaded constructor with one value // it is more like a function 
     box(int side){
         length = height = bredth = side ;
     }
      // overloaded constructor with multiple value
     box(int l , int b ,int  h ){
        length= l;
        bredth=b;
        height=h;
     }
    void show(){
        cout << "length :"<<length<<endl;
          cout   << "bredth :"<<bredth<<endl;
           cout  << "height :"<<height<<endl;
              
    }
};
    
    
int main(){
    
     box b1;
     
     box b2(5);
   
     box b3(2,3,4);
 
     b1.show();
     b2.show();
     b3.show();
    
     
    
     return 0;
    
}