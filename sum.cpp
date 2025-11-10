//WAP to input 10 number in a loop and find the sum of the numbers
#include <iostream>
using namespace std;
int main(){
    int i;
    int arr[10];
    int sum=0;
    cout<<"Enter 10 numbers: ";
    for(i=0;i<10;i++){
        cin>>arr[i];
    }
    for(i=0;i<10;i++){
        sum+=arr[i];
    }
    cout<<"Sum of 10 numbers is: "<<sum;
}