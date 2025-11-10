//WAP to input 10 numbers and print even numbers
#include <iostream>
using namespace std;
int main(){
    int arr[10];
    int i;
    cout<<"Enter 10 numbers: ";
    for(i=0;i<10;i++){
        cin>>arr[i];
    }
    cout<<"Even numbers are: \n";
    for(i=0;i<10;i++){
        if(arr[i]%2==0)
        cout<<arr[i]<<" ";
    }
}