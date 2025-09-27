#include<iostream>
using namespace std;

void sprial_print(int arr[][3],int n ,int m){
    int srow=0,scol=0,erow=n-1,ecol=m-1;
    while(srow<=erow && scol<=ecol){// = is for odd case of mid is printed 
        for(int j=scol;j<=ecol;j++){//top
        cout<<arr[srow][j]<<' ';
        }
        for(int i=srow+1;i<=erow;i++){//right
            cout<<arr[i][ecol]<<' ';
        }
        for(int j=ecol-1;j>=scol;j--){//bottom 
            if(erow==srow){break;}// for odd case so no duplicted is printed
            cout<<arr[erow][j]<<' ';
        }
        for(int i=erow-1;i>=srow+1;i--){//left
            if(ecol==scol){break;}// for odd case so no duplicted is printed
            cout<<arr[i][scol]<<' ';
        }
        srow++;scol++;
        ecol--,erow--;}
}

int main(){
    int matrix[6][3]={{ 1, 2, 3},
                      { 5, 6, 7},
                      { 9,10,11},
                      {12,13,14},
                      {12,13,14},
                      {12,13,14}};
    sprial_print(matrix,6,3);
    return 0;
}