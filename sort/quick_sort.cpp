#include <iostream>
#include <vector>
using namespace std;

int partion(vector<int> &arr,int str,int end){
int idx=str-1,pivot=arr[end];
for (int i=str;i<end;i++){
    if (pivot>=arr[i]){
        idx++;
        swap(arr[i],arr[idx]);
    }
    
}
    idx++;
    swap(arr[idx],arr[end]);
    return idx;
}

void quick_sort(vector<int> &arr,int str,int end){
    if (str<end){
int pivIdx=partion(arr,str,end);
quick_sort(arr,str,pivIdx-1);
quick_sort(arr,pivIdx+1,end);}

}

int main (){
vector <int> arr{1,3,5,6,43,3};

quick_sort(arr,0,arr.size()-1);
for (int val:arr){
    cout<<val<<" ";
}
return 0;
}