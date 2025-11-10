//WAP to input 10 numbers and print the first even number
#include <iostream>
using namespace std;
int main(){
    int arr[10];
    cout<<"Enter 10 numbers: ";
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    for(int i=0;i<10;i++){
        if(arr[i]%2==0){
            cout<<"First even number is: "<<arr[i];
        break;
        }
    }
}