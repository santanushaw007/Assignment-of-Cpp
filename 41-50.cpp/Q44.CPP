//NAME : SANTANU SHAW
//COURSE: BTECH(CSE)
//SEC:(A) 
//ROLL NO: 56
    
    
#include<iostream>
using namespace std ;

class employee{
    private:
      int salary;
    public:
      string name;
      int age;
      string gender;
      string id;
      double phone;

 employee(string n , int a , string g,string i,double p){
   name=n;
   age=a;
   gender=g;
   id=i;
   phone=p;
   
 }
 void setsalary(int baseSalary, int bonus)
{
salary = baseSalary + bonus;
}

int getsalary(){
return salary;
}
};
    
    
int main(){
    employee E1=employee("Mohan Kumar",32,"male","M1",6667779980 );

    E1.setsalary(30000,900);
    cout<<E1.name<<endl;
    cout<<"$"<<E1.getsalary();

    
     
    
     return 0;
    
}