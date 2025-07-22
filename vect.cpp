#include <iostream>
#include<vector>
using namespace std;

int main (){
vector<int> dis_arr(2,1);
cout<<dis_arr.size()<<endl;
dis_arr.push_back(1);
dis_arr.push_back(2);
dis_arr.push_back(3);
dis_arr.push_back(4);

for (int val:dis_arr){
    cout<<val<<endl;
}
cout<<dis_arr.capacity()<<endl;

return 0;
}