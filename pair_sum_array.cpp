#include<iostream>
#include<vector>
using namespace std;
void pair_sum(int arr[],int s,int n){
    vector<int> ans;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n-1;j++){
            if(arr[i]+arr[j]==s){

                if(arr[i]<arr[j]){
                    ans.push_back(arr[i]);
                    ans.push_back(arr[j]);

                }
                else{
                    ans.push_back(arr[j]);
                    ans.push_back(arr[i]);

                }
            }
        }
    }

    for(int i=0;i<ans.size();i+=2){
        cout<<ans[i]<<" "<<ans[i+1]<<endl;
    }
}
int main(){
    int n=39;
    int s=15;
    int arr[]={1,2,3,4,2,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,40,27,28,29,30,31,32,33,34,35,36,37,38,39,};
    pair_sum(arr,s,n);


}
