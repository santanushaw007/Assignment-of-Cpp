//NAME : SANTANU SHAW
//COURSE: BTECH(CSE)
//SEC:(A) 
//ROLL NO: 56
    
    
#include<iostream>
#include<string>
using namespace std ;
class student{
private:
    double phone; 
public:
    string name;
    int roll;
    string classroom;
    string depart ;


 // for pulling the private data , we use setter-getter function
 //setter function
 void setphone(double p){
    phone=p;

 }
 // getter function
 double getphone(){
    return phone;
 }

};
    
int main()
{
    student s1;
    s1.name="santanu";
    s1.roll=56;
    s1.classroom="G6";
    s1.setphone(222333);
     
    cout<<s1.name<<endl;
    cout<<s1.getphone()<<endl;
    

}