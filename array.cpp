//Program: WAP to input 5 numbers and print the array
#include <iostream>
using namespace std;
int main(){
    int arr[5];
    cout<<"Enter 5 numbers: ";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    cout<<"The 5 numbers are: \n";
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}