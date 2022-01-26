#include<iostream>
using namespace std;

void print(int arr[],int n){
  for (int i=0;i<n;i++){
    cout<<(arr[i])<<" ";
  }
}
// function to sort
void bubblesort(int arr[],int n){
  for(int i=0;i<n-1;i++){
    int max;
    for(int j=0;j<n-i;j++){
      if(arr[i]>arr[i+1]){
        swap(arr[i],arr[i+1]);
      }
    }
  } // bubblesort(arr,n);
print(arr,n);
cout<<endl;
}

int main(){
  int n=8;
  int arr[8]={15,9,22,1,4,18,3,35};
  for(int i=0;i<n;i++){

    bubblesort(arr,n);
  }

}
