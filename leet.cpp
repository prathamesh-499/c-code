#include<iostream>
#include <vector>
using namespace std;

class Solution {
public:
vector<int> par(vector<int> &temp,int str,int mid,int end,int target){
    int i=str,j=mid+1;
    while(i<=mid){
        if (temp [i]+temp[j]==target){
            return {i,j};
            
        }
        i++;
       
    }
            i=str;

    while(j<=end){
        if (temp [i]+temp[j]==target){
            return {i,j};
        }
                    j++;
    }
    return{-1};
}

vector<int> s(vector<int> &temp,int str,int end,int tar){
       if (str >= end) return {-1, -1};
    int mid=str+(end-str)/2;

    s(temp,str,mid,tar);
    s(temp,mid+1,end,tar);
static vector<int> x= par(temp,str,mid,end,tar);
        if (x[0]!=-1){
            return x;
        
    }
    return {-1};
        }

    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> temp;
        for(int val:nums){
            if (val<target){
                temp.push_back(val);
            }
        }
        vector<int> x=s(temp,0,temp.size()-1,target);
    return x;

}

     
};
int main (){

Solution obj;
vector<int> nums{2,7,11,15};
vector<int> x=obj.twoSum(nums,9);
for (int val:x){
    cout<<val<<" ";
}
return 0;
}