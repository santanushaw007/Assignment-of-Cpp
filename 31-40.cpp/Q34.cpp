//NAME : SANTANU SHAW 
//COURSE: BTECH(CSE)
//SEC: "A"
//ROLL NO: 56


#include <iostream>
using namespace std;
int main(){
    // programme to reverse an array
    int n;
    cout<<" enter the size of array:"<<endl;
    cin>>n;
    int a[n] , i , max ;
    cout<<" enter the elements of array:"<<endl;
    for(i=0 ; i<n; i++){
        cin>>a[i];
    }
    for(i=0 ; i<n/2 ; i++){
        int temp = a[i];
        a[i] = a[n-i-1];
        a[n-i-1] = temp;
    }
    cout<<" reversed array is : ";
    for(i=0 ; i<n ; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    return 0;
}