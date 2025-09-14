#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;
  
int main (){
multimap<string,int> m;

m.emplace("age",29);
m.insert({"key",3});
m.insert({"key1",22});
m.insert({"key1",22});
m.insert({"key1",22});
auto it=m.find("key1");

m.erase(it);


for (pair<string,int> val :m){
    cout<<val.first<<" "<<val.second<<endl;
}

pair<string,int>p=*it;

cout<<p.first;

return 0;
}