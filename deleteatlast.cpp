#include<iostream>
using namespace std;
int main(){
    int arr[100],i,n;
    cin>>n;
    cout<<"Enter the arr: ";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    
    n--;
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}