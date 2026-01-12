//NAME : SANTANU SHAW
//COURSE: BTECH(CSE)
//SEC:(A) 
//ROLL NO: 56
    
    
#include<iostream>
using namespace std ;
    
class car {
    private:

    string model;
    float speed;
    int price;
    string color;

    public:
    void setspeed(int s)
    {
        speed=s;
    }
    float getspeed()
    {
        return speed;
    }

      
    car( string m , float s ,int p , string c)
    {
        model = m ;
        speed=s;
        price=p;
        color=c;

    }

};
    
    
int main(){
    
     car farrari= car("G14" , 500,4500,"black");
   
     float change_speed;
    cout<<"enter the changing speed: "<< endl;
     cin>> change_speed ;
    
     farrari.setspeed(change_speed);
     cout<<farrari.getspeed();

    
     return 0;
    
}