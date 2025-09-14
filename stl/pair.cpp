#include<iostream>
#include<vector>

using namespace std;

int main (){

pair <pair<int,int>,char> p={{1,4},'f'};
cout<<p.first.second<<endl;
cout<<p.second<<endl;

vector <pair<int,string>> vp={{2,"d"},{4,"e"},{3,"p"}};

for(pair<int,string> val:vp){//pair<int,string> == auto
    cout<<val.first<<" "<<val.second<<endl;
}
vp.push_back({1,"edw"});
vp.emplace_back(2,"dw");
for(pair<int,string> val:vp){//pair<int,string> == auto
    cout<<val.first<<" "<<val.second<<endl;
}
return 0;
}