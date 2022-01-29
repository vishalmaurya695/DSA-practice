#include<iostream>
using namespace std;
// function to find sqrt in integer
float  findsqrt(int num){
  int start=0;
  int end=num-1;
  int ans=0;
  int mid = start+(end-start)/2;

  while(start<end){
    int square=mid*mid;
    if(square>num){
      end=mid;
    }

    else if(square<num){
      start=mid+1;
      ans=mid;
    }

    else{
      ans=mid;
      return ans;
    }
    mid=start+(end-start)/2;
  }
  return ans;
}

// function to precise sqrt in decimal 
double moreprecised(int num, int decimalplace, int tempsol){
  double factor=1;
  double ans=tempsol;

  for (int i=0;i<decimalplace;i++){
    factor=factor/10;

      for(double j=ans;j*j<num;j=j+factor){
        ans=j;
      }
  }
  return ans;
}

// main funnction
int main(){
  int num=16123;
  int result=findsqrt(num);
  double precisedsqrt = moreprecised(num,4,result);

  cout<<"square root of : "<<num<<" is "<<result<<endl;
  cout<<"precised square root of : "<<num<<" is "<<precisedsqrt<<endl;
}
