#include <iostream>
#include <vector>
using namespace std;

void selection_sort(vector<int> &arr){
for(int i =0;i<arr.size();i++){
    int minIdx=i;
    for(int j=i+1;j<arr.size();j++){
        if (arr[minIdx]>arr[j]){
            minIdx=j;
        }
    }
    swap(arr[i],arr[minIdx]);
}
}





int main (){
vector <int> arr{1,3,5,6,47,3};

selection_sort(arr);
for (int val:arr){
    cout<<val<<" ";
}
return 0;
}