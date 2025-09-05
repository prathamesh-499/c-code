#include <iostream>
#include<vector>
using namespace std;

int binary_search_iterator(vector<int>ls,int tar){
int low=0;
int high=ls.size()-1;

for (int i =0;i<ls.size();i++){
int mid=(low+high)/2;

if(ls[mid]==tar){
   return mid;}

if(ls[mid]>tar){
high=mid-1;}

if(ls[mid]<tar){
   low=mid+1;}}

return -1;}

int binary_search_Recursive(const vector<int> &arr,int tar,int low,int high){
   if (low<=high){
   int mid=low+(high-low)/2;
   if (arr[mid]==tar){
      return mid;
   }
   else if (arr[mid]<tar){
      return binary_search_Recursive(arr,tar,mid+1,high);
   }
   else{
      return binary_search_Recursive(arr,tar,low,mid-1);
   }}
return -1;
}

int main (){
vector<int> ls={1,2,3,4,5};
cout<<binary_search_Recursive(ls,2,0,ls.size()-1);
return 0;
}