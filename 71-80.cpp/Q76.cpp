//NAME : SANTANU SHAW
//COURSE: BTECH(CSE)
//SEC:(A) 
//ROLL NO: 56
    
    
#include<iostream>
using namespace std ;
    
class queue{
    int q[5];
    int front , rear ;
    public:
    queue(){
        front=-1;
        rear=-1;

    }
    void enqueue(int x){
        if (rear == 4){
            cout <<"queue is full"<<endl;
        }
        else{
            if (front == -1)
                front =0;
            q[++rear]=x;
            cout<<x<<"added"<<endl;
        }
    }
    void dequeue(){
        if (front == -1 || front>rear){
            cout<<"queue is empty"<<endl;
        }
        else{
            cout<<q[front++]<<"removed"<<endl;
        }
    }
};
    
int main(){
    
    queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.dequeue();
    
     
    
     return 0;
    
}