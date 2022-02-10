#include<iostream>
#include<vector>
#include"print.cpp"
using namespace std;

vector<int> addarr(int arr1[],int n, int arr2[],int m){
    int i=n-1;
    int j=m-1;
    int carry =0;
    vector<int> answer;
    while(i>=0 && j>=0){
        int val1=arr1[i];
        int val2=arr2[j];
        int sum = val1 + val2 + carry;

        carry = sum/10;
        sum = sum%10;
        answer.push_back(sum);
        i--;
        j--;
    }

    // first case

    while(i>=0){
        int sum = arr1[i] + carry;
        carry = sum/10;
        sum = sum%10;
        answer.push_back(sum);
        i--;
    }
    // second case
    while(j>=0){
        int sum = arr1[i] + carry;
        carry = sum/10;
        sum = sum%10;
        answer.push_back(sum);
        j--;
    }
    // third case
    while(carry!=0){
        int sum = carry;
        carry = sum/10;
        sum = sum%10;
        answer.push_back(sum);
        j--;
    }
    
    cout<<answer[2];
return answer;
}

int main(){
    int n=4;
    int m=2;
    int arr1[]={2,3,5,8};
    int arr2[]={5,8};
    printarr(arr1,4);
    int ans = addarr(arr1,n,arr2,m);
    int len = ans.size();
    // printarr(ans,len);

    for(int i=0;i<len;i++){
    cout<<ans[i]<<" ";
    }

}