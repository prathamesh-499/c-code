#include<iostream>
#include<set>
#include<unordered_set>
using namespace std;
int main (){
    set<int> s;
    s.emplace(1);
    s.emplace(2);
    s.emplace(3);
    s.emplace(4);
auto it = s.lower_bound(9);
cout << (it == s.end() ? "hw" : to_string(*it)) << endl;

    cout<<*(s.upper_bound(2))<<endl;

    for(int val:s){
        cout <<val<<" ";
    }
    cout<<__builtin_popcount(8);
return 0;
}