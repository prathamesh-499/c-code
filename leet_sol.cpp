#include<iostream>
#include<vector>
#include<climits>
#include <string>
#include <algorithm>


using namespace std;
bool isPalindrome(int x) {
     string s = to_string(x);
     string rev= s;

     reverse(rev.begin(), rev.end());

     if(s!=rev)
        return false;
        return true;
     
        }
vector<int> pair_sum(vector<int> arr,int tar){//O(n) 
    int i=0,j=arr.size()-1;
    while(i<j){
        int pair_sum=arr[i]+arr[j];
        if (pair_sum>tar){i++;}
        else if (pair_sum<tar){j--;}
        else{return {i,j};}
    }
    return {NULL};
}
int maximum_subarray_sum(vector<int>arr){//O(n)
    int max_sum=INT_MIN,curr=0;
    for (int val:arr){
        curr+=val;
        max_sum=max(curr,max_sum);
        if (curr<0){
            curr=0;
        }
    }
    return max_sum;
}
int maxArea(vector<int>height){//O(n)
         int p1=0,max_area=0;
    int p2=height.size()-1;

    while(p1<p2){
        
        if (height[p1]>=height[p2]){
            max_area=max(height[p2]*(p2-p1),max_area);
            p2--;
        }
        else{
            max_area=max(height[p1]*(p2-p1),max_area);
            p1++;
        }
    }
return max_area;
        
    }
double power(double x,int n){//O(logn)
    int b=n;//wrong do not run
    double ans=1;
if (n==0)return 1;
n=abs(n);
    while(n>0){
        if (n%2==1){
        ans*=x;}
        x*=x;
        n/=2;
    }
    if (b>0)return ans;
    else 
    return 1/ans;

}

int search(vector<int>& nums, int target) {//O(logn)
        int low =0,high=nums.size()-1;
        
        while(low<=high){
            int mid=low+(high-low)/2;
            if (nums[mid]==target){return mid;}

            if(nums[low]<=nums[mid]){//left storted
                if (nums[low]<=target && target<nums[mid]){high=mid-1;}
                else{low=mid+1;}
            }
            else{//right storted
                if (nums[mid]<target && target<=nums[high]){low=mid+1;}
                else{high=mid-1;}
            }
        }
        return -1;
    }
int peakIndexInMountainArray(vector<int>& arr) {
    int low =0,high= arr.size()-1;
    while(low<high){
        int mid=low+(high-low)/2;
        if (arr[mid-1]<arr[mid]&& arr[mid]>arr[mid+1]){return mid;}
        if(arr[mid-1]<=arr[mid]){low=mid+1;}
        else{high=mid;}
    }
    return -1;
//OR
//     int peakIndexInMountainArray(vector<int>& arr) {
//         int low =1,high= arr.size()-2;
//         while(low<=high){
//             int mid=low+(high-low)/2;
//             if (arr[mid-1]<arr[mid]&& arr[mid]>arr[mid+1]){return mid;}
//             if(arr[mid-1]<=arr[mid]){low=mid+1;}
//             else{high=mid-1;}
//         }
//         return -1;
//     }

    
}
int singleNonDuplicate(vector<int>& arr) {
    int low =0,high =arr.size()-1;
    if (arr.size()==1){return arr[0];}
    
    while(low<=high){
        int mid=low+(high-low)/2;
        if (mid==0 && arr[0]!=arr[1]){return arr[0];}
        if (mid==arr.size()-1 &&arr[arr.size()-1]!=arr[arr.size()-2]){return arr[arr.size()-1];}
        if(arr[mid-1]!=arr[mid]&&arr[mid]!=arr[mid+1]){return arr[mid];}
        
        if(mid%2==0){
            if (arr[mid]==arr[mid-1]){high=mid-1;}
            else{low=mid+1;}
        }
        else{
            if(arr[mid-1]==arr[mid]){low=mid+1;}
            else{high=mid-1;}
        }

    }
    return -1;
}

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0,j=0;
        vector<int> nums;
        while(i<m &&j< n){
            if (nums1[i]<nums2[j]){
                nums.push_back(nums1[i]);
                i++;
            }
            else{nums.push_back(nums2[j]);
                j++;}
        }
        while(i<m){
            nums.push_back(nums1[i]);
            i++;
        }
        while(j<m){
            nums.push_back(nums2[j]);
            j++;
        }
        nums1=nums;
    }
    
double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    int i=0,j=0,mid;
    double ans;
    vector<int>arr;
    while(i<nums1.size() && j<nums2.size()){
        if(nums1[i]<nums2[j]){
            arr.push_back(nums1[i++]);
        }
        else{arr.push_back(nums2[j++]);}
    }
    while(i<nums1.size()){
            arr.push_back(nums1[i++]);
    }
    while(j<nums2.size()){
            arr.push_back(nums2[j++]);
    }

    mid=(arr.size()-1)/2;
    if (arr.size()%2==1){
        return arr[mid];
    }
    else {
        return (arr[mid+1]+arr[mid])/2.0;
            }
}

    int main (){
vector<int>arr{1,2,3,0,0,0},arr1{2,5,6};
merge(arr,3,arr1,3);
for(auto a:arr){
    cout<<a;
}
return 0;
}
