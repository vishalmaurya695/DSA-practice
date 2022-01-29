#include<iostream>
using namespace std;

void printarr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void reversearr(int arr[],int n){
    int p=n-1;
    for (int i=0;i<n/2;i++){
        int temp=arr[i];
        arr[i]=arr[p-i];
        arr[p-i]=temp;
    }
    printarr(arr,n);
}

int main(){
    int n=5;
    int arr[5]={5,3,24,8,6};
    printarr(arr,n);
    reversearr(arr,n);
}