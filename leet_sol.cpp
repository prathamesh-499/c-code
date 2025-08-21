#include<iostream>
#include<vector>
#include<list>
#include <string>
#include <algorithm>


using namespace std;
bool isPalindrome(int x) {
     string s = to_string(x);
     string rev= s;

     reverse(rev.begin(), rev.end());

     if(s!=rev)
        return false;
        return true;
     
        }

    
int main (){
    int x =11;

cout<<isPalindrome(x);
return 0;
}
