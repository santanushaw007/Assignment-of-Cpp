//NAME : SANTANU SHAW 
//COURSE: BTECH(CSE)
//SEC: "A"
//ROLL NO: 56

#include <iostream>
using namespace std;    
int main(){

    float r , a, l , b , h;

    // for circle 
    cout<<"enter the radius 'r' of the circle: ";
    cin>>r;
    a = 3.14159*r*r;
    cout<<"Area of the circle is : "<<a<<" sq.units"<<endl;
    // for triangle
    cout<<"enter the base 'b' and height 'h' of the triangle: ";    
    cin>>b>>h;
    a= 0.5*b*h;
    cout<<"Area of the triangle is : "<<a<<" sq.units"<<endl;
    // for rectangle
    cout<<"enter the length 'l' and breadth 'b' of the rectangle: ";
    cin>>l>>b;
    a= l*b;
    cout<<"Area of the rectangle is : "<<a<<" sq.units"<<endl;
    return 0;

}