#include<iostream>
#include <vector>
using namespace std;
void merge(vector<int> &arr,int str,int mid,int end ){
int i =str,j=mid+1;
vector<int> temp;
while (i<=mid && j<=end)
{
    if (arr[i]<=arr[j]){
        temp.push_back(arr[i]);
        i++;
    }
    else{
        temp.push_back(arr[j]);
        j++;
    }
}

while (i<=mid){
        temp.push_back(arr[i]);
        i++;
}
while (j<=end){
        temp.push_back(arr[j]);
        j++;
}
for (int i;i<temp.size();i++){
    arr[i+str]=temp[i];
}
}

void merge_sort(vector<int> &arr,int str,int end ){
if (str<end){
    int mid= str+(end-str)/2;
    merge_sort(arr,str,mid);     //left

    merge_sort(arr,mid+1,end);    //right

    merge(arr,str,mid,end);
}

}


int main (){
vector<int> arr{3,5,2,1,5};
merge_sort(arr,0,arr.size()-1);

for (int val:arr){
    cout<<val<<" ";
}
return 0;
}