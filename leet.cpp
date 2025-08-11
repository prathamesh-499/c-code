#include<iostream>
#include <vector>
using namespace std;
    int maxProfit(vector<int>& prices) {

        int large=prices[0];
        int small=prices[0];
        bool c=0;

        for (int i=0;i<prices.size() ;i++){

            if(small>prices[i]){

            small=prices[i];
            large=prices[i];
            c=1;
            cout<<"sm:"<<small<<endl;


        }
        if(c){
            if (large<prices[i]){
                large=prices[i];
                cout<<"larg:"<<large<<endl;
            }}}
        return large-small;

        
    }
    bool isPowerOfTwo(int n) {
        return n > 0 && (n & (n - 1)) == 0;
    }

int main (){
    vector<int> prices{7,3,9,3,6,1,1};
// cout<<maxProfit(prices);

return 0;
}