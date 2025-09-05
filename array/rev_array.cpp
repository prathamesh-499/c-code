#include <iostream>
using namespace std;


void rev_arr(int arr[],int n){
for (int i=0,j=n-1;i<j;i++){

int temp;
temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;

j--;}}




int main(){
int n;
cin>>n;
int arr[n];
for (int i=0;i<n;i++){
cin>>arr[i];
}
n=sizeof(arr)/sizeof(arr[0]);

rev_arr(arr,n);

for(int i=0;i<n;i++){
cout<<endl<<arr[i];
}


return 0;

}