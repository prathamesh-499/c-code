#include <iostream>
using namespace std;


void rev_arr(int arr[],int n){
    int i=0,j=n-1;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}


int main(){
int n;

int arr[4]={1,2,3,4};
n=4;
rev_arr(arr,n);

for(int i=0;i<n;i++){
cout<<arr[i]<<" ";
}


return 0;

}