#include <iostream>
#include<vector>
using namespace std;

int main (){
vector<int> dis_arr;
dis_arr.push_back(1);
dis_arr.push_back(2);
dis_arr.push_back(3);
dis_arr.push_back(4);

// for (int val:dis_arr){
//     cout<<val<<endl;
// }

for (auto it=dis_arr.begin();it!=dis_arr.end();it++){
    cout<<*(it)<<" ";
}
for (vector<int> ::reverse_iterator it=dis_arr.rbegin();it!=dis_arr.rend();it++){//vector<int> ::reverse_iterator  == auto
    cout<<*(it)<<" ";
}


return 0;
}