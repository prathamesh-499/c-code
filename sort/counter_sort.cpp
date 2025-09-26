#include<iostream>
#include<vector>
using namespace std;
void counter_sort(vector<int>&arr){
    vector<int>fre(arr.size(),0);
    for (int i =0;i<arr.size();i++){
        fre[arr[i]]++ ;
    }
        int j=0;

    for (int i =0;i<arr.size();i++){
     while(fre[i]!=0){
        arr[j++]=i;
        fre[i]--;
     }
    }
    


}
int main (){

vector <int> arr{1,2,0,1,2,0,5,1,2,4,2};

counter_sort(arr);

for(auto val:arr){
    cout<<val<<" ";
}


    return 0;
} 
