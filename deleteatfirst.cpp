#include<iostream>
using namespace std;
int main(){
    int arr[100],i,n;
    cin>>n;
    cout<<"enter the element of arr: ";
    for(i=0;i<n;i++){
        cin>>arr[i];

    }
    for(i=0;i<n;i++){
        arr[i]=arr[i+1];
    }
    cout<<"after the delelte at first index : ";
    for(int i=0; i<n-1;i++){
        cout<<arr[i]<<" ";
    }
}