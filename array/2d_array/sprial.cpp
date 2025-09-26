#include<iostream>
using namespace std;

void sprial_print(int arr[][4],int n ,int m){
    int srow=0,scol=0,erow=n-1,ecol=m-1;
    for(int j=scol;j<=ecol;j++){//top
        cout<<arr[srow][j];
    }
    for(int i=srow+1;i<=erow;i++){//right
        cout<<arr[i][ecol];
    }
    for(int j=ecol-1;j>=scol;j--){//bottom 
        cout<<arr[erow][j];
    }
    for(int i=erow-1;i>=srow+1;i--){//left
        cout<<arr[i][scol];
    }

}

int main(){
    int matrix[4][4]={{ 1, 2, 3, 4},
                      { 5, 6, 7, 8},
                      { 9,10,11,12},
                      {13,14,15,16}};
    sprial_print(matrix,4,4);
    return 0;
}