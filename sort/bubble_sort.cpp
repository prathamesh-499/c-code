#include<iostream>
#include<vector>
using namespace std;

void bubble_sort(vector<int> &arr){
    for (int i = 0; i < arr.size(); i++)
    {bool swaped=1;
        for (int j = 0; j < arr.size()-i-1; j++)
        {
            if (arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swaped=0;
            }
        }
        if (swaped){break;}
        
    }
    


}



int main (){
vector <int> arr{1,3,5,6,47,3};

bubble_sort(arr);
for (int val:arr){
    cout<<val<<" ";
}
return 0;
}
