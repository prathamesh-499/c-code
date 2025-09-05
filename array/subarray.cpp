#include<iostream>
#include <climits>
using namespace std;


void print_subarray(int arr[],int n){

    for (int str=0;str<n;str++){//O(n^3) brute force
        for (int end =str;end<n;end++){
            for(int i=str;i<=end;i++){
                cout<<arr[i];
            }
            cout<<" ";

        }
        cout<<endl;
    }
}

int max_subarray_sum(int arr[],int n){
int max_sum=INT_MIN;
            for (int str=0;str<n;str++){//O(n^2) brute force sum approch
                int cur_sum=0;
                for (int end =str;end<n;end++){
                   cur_sum+=arr[end];
                   max_sum=max(cur_sum,max_sum);

                }
    }
    return max_sum;
}
int max_sub_arrary_sum_kadanes(int arr[],int n){//O(n)
    int max_sum=INT_MIN,curr_sum=0;
    for (int i =0;i<n;i++){
        curr_sum+=arr[i];
        max_sum=max(curr_sum,max_sum);
        if (curr_sum<0){
            curr_sum=0;
        }
    }
    return max_sum;
}

int main(){
    int arr[5]={1,2,3,4,5};

    int n=size(arr);
    
    print_subarray(arr,n);
    cout<<max_sub_arrary_sum_kadanes(arr,n);

    

    return  0;
}