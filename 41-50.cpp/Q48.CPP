//NAME : SANTANU SHAW
//COURSE: BTECH(CSE)
//SEC:(A) 
//ROLL NO: 56
    
    
#include<iostream>
using namespace std ;

class square{
    public:
    int l , b ;

void input(){
    cout <<"enter length & bredth : ";
    cin>>l>>b;
}
int area (){
    int result ;
    result = l * b ;
    cout<<"the area is :"<<result << "square unit .";
    
}
   
};
    
    
int main(){
    square s1;
    s1.input();
    s1.area();
    
     
    
     return 0;
    
}