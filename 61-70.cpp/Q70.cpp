//NAME : SANTANU SHAW
//COURSE: BTECH(CSE)
//SEC:(A) 
//ROLL NO: 56
    
    
#include<iostream>
using namespace std ;
    
class swap{
    int x,y;
    public:
    swap(int a , int b){
        x=a;
        y=b;
    }
    friend void swapvalues(swap &s);
    void show(){
        cout<<x<<" "<<y<<endl;
    }
}  ;  

void swapvalues(swap &s){
    int temp =s.x;
    s.x=s.y;
    s.y=temp;
}
    
int main(){
  
    swap s(10,20);

    cout<<"before swap : ";
    s.show();
     swapvalues(s);
     cout<<"after swap";
     s.show();
    
     
    
     return 0;
    
}