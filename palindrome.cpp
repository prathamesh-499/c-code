#include<iostream>

using namespace std;

string reverse_str(string str){
    string temp="";
    for(int i =str.size()-1;i>=0;i--){
        temp+=str[i];
    }
    return temp;
}

void is_palindrome(string str){

if (str==reverse_str(str)){
    cout<<"palindrome";
}
else {
cout<<"not palindrome";}

}

int main (){
string str="rotor";
is_palindrome(str);
return 0;
}