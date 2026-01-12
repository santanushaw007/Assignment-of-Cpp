//NAME : SANTANU SHAW
//COURSE: BTECH(CSE)
//SEC:(A) 
//ROLL NO: 56
    
    
#include<iostream>
using namespace std ;
  
class student{
    public :
    int marks;

void num(){
    cout<<"enter your number : ";
    cin>> marks;
}
void compare(student s2){
    if ( marks < s2.marks){
        cout<<" student2 wins.."<<endl;
    }
    else if (marks > s2.marks){
        cout <<"your marks is greater....."<<endl;

    }
    else{
    cout<< "both got same marks";
    }
}
};
    
    
int main(){
    student s1;
    s1.num();
    student s2;
    s2.num();
    s1.compare(s2);
    
    
     
    
     return 0;
    
}