//NAME : SANTANU SHAW
//COURSE: BTECH(CSE)
//SEC:(A) 
//ROLL NO: 56
    
    
#include<iostream>
using namespace std ;

class stack{
    int arr[5];
    int top;
    public:
    stack(){
        top=-1;

    }
    void push(int x){
        if(top == 4){
            cout<<"stack full"<<endl;
        }
        else{
            arr[++top]=x;
            cout<<x<<"pushed"<<endl;
        }
        
    }
    void pop(){
        if(top == -1){
            cout<<"stack empty"<<endl;
        }
        else{
            
            cout<<arr[top--]<<"poped"<<endl;
        }
        
    }
};
    
    
int main(){
    
    stack s;
    s.push(10);
    s.push(20);
    s.pop();
     
    
     return 0;
    
}