#include<iostream>
#include<list>
#include<stack>
using namespace std;
class Stack{
    list<int> ll;
public:
void push(int val){
    ll.push_front(val);
}
void pop(){
    if (! ll.empty()){
    ll.pop_front();}
}
int top(){
        if (!ll.empty()){
    return ll.front();}
    else {cout<<"stack is empty";}
    return -1;
}
bool empty(){
    return !ll.size();
}
};
int main (){
Stack ll_s;
stack <int>s;// this is the included stack
// cout<<ll_s.top();
s.push(1);
s.push(2);
s.push(3);
s.push(4);
s.push(5);
s.push(6);
s.push(7);
s.push(8);
s.push(9);
s.push(10);
while(!s.empty()){
    cout<<s.top()<<endl;
    s.pop();
}
return 0;
}