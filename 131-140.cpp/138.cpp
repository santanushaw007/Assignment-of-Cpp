//NAME : SANTANU SHAW
//COURSE: BTECH(CSE)
//SEC:(A) 
//ROLL NO: 56
    
    
#include<iostream>
#include<fstream>
using namespace std ;

struct Student {
    int roll;
    char name[50];
};
    
    
int main(){
   Student s1;
   ofstream out("stu.dat",ios::binary); 
   out.write((char*)&s1,sizeof(s1));
   out.close();
    Student s2;
    ifstream in("stu.dat",ios::binary);
    in.read((char*)&s2,sizeof(s2));
    in.close();
    cout<<"Roll: "<<s2.roll<<", Name: "<<s2.name<<endl;

     
    
     return 0;
    
}