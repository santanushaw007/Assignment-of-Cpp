//NAME : SANTANU SHAW 
//COURSE: BTECH(CSE)
//SEC: "A"
//ROLL NO: 56


#include <iostream>
using namespace std;
int main(){
// programe for matrix addition in array //
 int a[3][3];
 int b[3][3];
 int c[3][3];
 
 // taking input of the arrays
 cout<<"enter the value of matrix a:";
 for(int i=0; i<=2;i++){
    for(int j=0; j<=2;j++){
        cin>>a[i][j];

    }
 }
 cout<<"enter the value of matrix b:";
 for(int i=0; i<=2;i++)
 {
    for(int j=0; j<=2;j++)
    {
        cin>>b[i][j];

    }
 }
 


 for(int i=0; i<=2;i++)
 {
    for(int j=0; j<=2;j++)
    {
        c[i][j]=a[i][j]+b[i][j];
        cout<<c[i][j]<<" ";

    }
    cout<<endl;
 }

 return 0;
}
