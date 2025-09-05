#include <iostream>
#include <vector>
using namespace std;

void insertion_sort(vector<int> &arr){

    for (int  i = 1; i < arr.size(); i++){
    int curr=arr[i],pre=i-1;
    while(pre>=0 && arr[pre]>curr){
        arr[pre+1]=arr[pre];
        pre--;
    }
    arr[pre+1]=curr;
    }
    

}
int main (){
vector <int> arr{3,1,5,6,43,3};
insertion_sort(arr);
for (int val:arr){
    cout<<val<<" ";
}
return 0;
}