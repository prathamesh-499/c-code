#include <iostream>
#include<vector>
using namespace std;

int ls_func(vector<int>ls,int tar){
int low=0;
int high=ls.size()-1;
int mid=(ls.size())/2;
for (int i =0;i<ls.size();i++){
mid=(low+high)/2;

if(ls[mid]==tar){
   return mid;
}
if(ls[mid]>tar){
high=mid-1;


}
if(ls[mid]<tar){
   low=mid+1;

}
}
return -1;
}

int main (){
vector<int> ls={1,2,3,4,5};
cout<<ls_func(ls,3);
return 0;
}