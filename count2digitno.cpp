//WAP to enter 10 numbers and count 2 digit even number
#include <iostream>
using namespace std;
int main(){
    int arr[10];
    int count=0;
    cout<<"Enter 10 numbers: ";
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    for(int i=0;i<10;i++){
        if(arr[i]%2==0 && arr[i]>=10 && arr[i]<=100){
           count++;
        }
    }
    cout<<"No. of 2 digit even numbers are: "<<count<<endl;
    cout<<"2-digit even numbers are: \n";
    for(int i=0;i<10;i++){
        if(arr[i]%2==0 && arr[i]>=10 && arr[i]<=100){
        cout<<arr[i]<<" ";
        }
    }
}