#include<iostream>
#include<map>
using namespace std;
  
int main (){
map<string,int> m;

m.insert({"Key",1});
m.emplace("age",29);
m["Key"]=3;
m.insert({"Key",2});

for (pair<string,int> val :m){
    cout<<val.first<<" "<<val.second<<endl;
}
cout<<m.count("Key");

return 0;
}