#include<iostream>
using namespace std ;

pair<int,int> search(int arr[][3],int n,int m,int tar){
    int srow=0,erow=n-1;
    int scol=0,ecol=m-1;
    if (arr[srow][scol]<=tar && arr[erow][ecol]>=tar){
        while(srow<=erow){
            int mid=srow+(erow-srow)/2;
            
            if(arr[mid][0]<=tar && arr[mid][ecol]>=tar){
                while(scol<=ecol){
                    int mid2=scol+(ecol-scol)/2;
                    if(arr[mid][mid2]==tar){return {mid,mid2};}
                    else if(arr[mid][mid2]>tar){
                        ecol=mid2-1;
                    }
                    else {//if(arr[mid][mid2]<tar)
                        scol=mid2+1;
                    }
                }
                    return {-1,-1};

            }
            else if(arr[mid][0]>tar){
                erow=mid-1;
            }
            else{//if(arr[mid][ecol]<tar)
                srow=mid+1;
            }
        }
        

    }
    return {-1,-1};

}


int main (){

    int matrix[3][3]={  { 1, 2, 3},
                        { 4, 5, 6},
                        { 7, 8, 9}};

    auto x=search(matrix,3,3,5);
    cout<<x.first<<" "<<x.second;
    return 0;
}