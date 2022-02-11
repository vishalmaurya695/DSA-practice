#include<iostream>
using namespace std;

void spiralprint(int arr[][4],int row,int col){
    int count = 0;
    int total = row*col;
    cout<<"printing spiral"<<endl;
    // indexes initialization
    int startingrow=0;
    int startingcol=0;
    int endingrow=row-1;
    int endingcol=col-1;

    while(count<=total){
        // printing starting row
        for(int index=startingcol;index<=endingcol;index++){
            cout<<arr[startingrow][index]<<" ";
        }
        startingrow++;

        // printing ending col
        for(int index=startingrow;index<=endingrow;index++){
            cout<<arr[index][endingcol]<<" ";
        }
        endingcol--;
        // printing ending row
        for(int index=endingcol;index>=startingcol;index--){
            cout<<arr[endingrow][index]<<" ";
        }
        endingrow--;

        // printing starting col
        for(int index=endingrow; index>=startingrow;index--){
            cout<<arr[index][startingcol]<<" ";
        }
        startingcol++;
    count++;
    }


}

void matrixprint(int arr[][4],int row,int col){
    cout<<"printing matrix"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int arr[4][4];
    int row=4;
    int col=4;
    // accept array inputs
    cout<<"enter values of matrix"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    matrixprint(arr,row,col);
    spiralprint(arr,row,col);
    

}