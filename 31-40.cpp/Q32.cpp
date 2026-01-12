//NAME : SANTANU SHAW 
//COURSE: BTECH(CSE)
//SEC: "A"
//ROLL NO: 56


#include <iostream>
using namespace std;
int main(){
    int a[n] , i , max ;
    cout<<" enter the elements of array:"<<endl;
    for(i=0 ; i<n; i++){
        cin>>a[i];

    }
    max = a[0];
    for(i=1 ; i<n ; i++){
        if(a[i]>max){
            max = a[i];
        }   
    }
cout<<" maximum element of array is : "<<max<<endl;

    return 0;
}
    