#include<fstream>  
#include<iostream>
using namespace std;

int main(){
    ifstream file("sample.txt");
    ofstream outfile("output.txt");
    string text;
    file>>text;
    outfile<<text;
    file.close();
    outfile.close();
    return 0;
}