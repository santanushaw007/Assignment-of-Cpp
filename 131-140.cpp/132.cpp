//NAME : SANTANU SHAW
//COURSE: BTECH(CSE)
//SEC:(A) 
//ROLL NO: 56
    
    
#include<iostream>
using namespace std ;
 
class student {
    public:
    int roll;
    char name[50];
};
    
    
int main(){
     student s1;
     cout<<"Enter roll number and name of student: ";
     cin>>s1.roll>>s1.name;
     cout<<"Roll number: "<<s1.roll<<endl;
     cout<<"Name: "<<s1.name<<endl;

     ofstream out("student.txt");
     out<<s1.roll<<" "<<s1.name<<endl;
     out.close();

     student s2;
     ifstream in("student.txt");
        in>>s2.roll>>s2.name;
        in.close();
        cout<<"Read from file - Roll number: "<<s2.roll<<", Name: "<<s2.name<<endl;
        
     
    
     return 0;
    
}