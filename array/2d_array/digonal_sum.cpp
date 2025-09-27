#include<iostream>
using namespace std ;
int digonal_sum(int arr[][4],int n){
    int sum=0;
    for (int i=0;i<n;i++){
        sum+=arr[i][i];//00 11 22 
        sum+=arr[i][n-i-1];//02 11 20
    }

    if (n%2==1){//for 11 mid in odd cases
        sum=sum-arr[n/2][n/2];
    }
return sum;

}


int main (){
    int matrix[4][4]={  { 1, 2, 3, 4},
                        { 5, 6, 7, 8},
                        { 9,10,11,12},
                        {13,14,15,16}};
    cout<<digonal_sum(matrix,4);

    return 0;
}