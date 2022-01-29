#include<iostream>
#include"print.cpp"
using namespace std;
void movezero(int arr[], int n){
    bool shift=false;


    for(int i=0;i<n-1;i++){

        for(int j=0;j<n-1;j++){

        if(arr[j]==0){
            arr[j]=arr[j+1];
            arr[j+1]=0;
            shift=true;
        }
        }
        
    }
    
    printarr(arr,n);

}
int main(){
    int n=5;
    int arr[5]={0,5,0,8,6};
    printarr(arr,n);
    movezero(arr,n);
}
