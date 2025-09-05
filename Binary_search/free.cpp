// #include<iostream>
// #include<vector>
// #include<climits>
// using namespace std; 
// bool valid(vector<int> &arr,int m,int mid){
//         int stu=1, n=arr.size(),pages=0;
//         for(int i=0;i<n;i++){
//             if(arr[i]>mid){return 0;}
//             if (pages+arr[i]<=mid){
//                 pages+=arr[i];
//             }
//             else{
//                 stu++;
//                 pages=arr[i];
//             }
//         }
//         return stu>m?0:1;
//     }

// int findPages(vector<int> &arr, int k) {
//     int n=arr.size();
//     if (k>n){return-1;}
//     int sum=0;
//     for(int i =0;i<n;i++){
//         sum+=arr[i];
//     }

//     int low =0,high=sum,ans;
    
//     while(low<=high){
//         int mid=low+(high-low)/2;
//         if (valid(arr,k,mid)){
//             ans=mid;
//             high=mid-1;
//         }
//         else{low=mid+1;}           
// }
//     return ans;
// }
        




// int main() {
// vector<int> arr={3,2,1,2};
//     cout<<findPages(arr,3);
     
// return 0;
// }




#include<iostream>
#include<climits>
#include<vector>
#include<algorithm>
using namespace std;

    bool valid(vector<int> &arr, int k,int mid){//O(n)
        int cow=1, last_stall=arr[0];
        
        for (int i=1;i<arr.size();i++){
            if(arr[i]-last_stall>=mid){
                cow++;
                if (cow==k)return 1;

                last_stall=arr[i];

            }
        }
        return 0;
        
    }
  
    int aggressiveCows(vector<int> &arr, int k) {
    int low=1,high,ans=-1;
    sort(arr.begin(),arr.end());//n*log n
    high=arr[arr.size()-1]-arr[0];
    while(low<=high){//n*log (range)
        int mid=low+(high-low)/2;
        if(valid(arr,k,mid)){
            low=mid+1;
            ans=mid;
        }
        else{
            high=mid-1;
        }
    }
    return ans;
    }



// bool vaild(int arr[],int m,int n,int  mid){
// 	int pan=1;
// 	int time=0;

// 	for(int i =0;i<n;i++){
// 		if (mid<arr[i]){return 0;}
// 		if (arr[i]+time<=mid){
// 			time+=arr[i];
// 		}
// 		else{
// 			pan++;
// 			time=arr[i];
// 		}
// 	}
// 	return pan>m?0:1;
// }

// int min_amt_time_paint(int arr[],int m,int n){
// 	if(m>n){return -1;}
// int  sum=0,low=0,ans,max_el=INT_MIN,high;//low can be replaced by max element in array
// 	for (int i =0;i<n;i++){
// 	sum+=arr[i];
//     max_el=max(max_el,arr[i]);
// }
// high =sum;
// low=max_el;
// while(low<=high){
// 	int  mid=low+(high-low)/2;
// 	if(vaild(arr,m,n,mid)){
// 		ans=mid;
// 		high=mid-1;
// 	}
// 	else{low=mid+1;}
// }
// return ans;
// }

int main(){
// int m=3,n=4,t;
// int arr[]={3,2,1,2};

// cout<<min_amt_time_paint(arr,m,n);
vector<int> arr{10, 1, 2, 7, 5};
cout<<aggressiveCows(arr,3);

	return 0;}