//NAME : SANTANU SHAW
//COURSE: BTECH(CSE)
//SEC:(A) 
//ROLL NO: 56
    
    
#include<iostream>

using namespace std ;

class wall {
    private:
     int length;
     int height;
    public:
     wall(double len , double hgt){
          length=len;
          height=hgt;
     } 
     wall(const wall &obj)  {
          length=obj.length;
          height=obj.height;
     } 
     void setlength(double len){
          length=len;
     }
     
     int area(){
          cout<<"enter the length and height : "<<endl;
          cin>>length>>height;
          cout<<"the area is :";
          return length*height;
     }
     ~wall(){
          delete length;
          delete height;
     }
};
    
    
int main(){
    wall w1=wall(2,4);
    wall w2=wall(w1);
    w2.setlength(10);
  w1.area();
  w2.area();
    
     
    
     return 0;
    
}