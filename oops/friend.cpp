#include<iostream>
using namespace std;
class Demo {
int a,b;
public:
Demo(int a ,int b){
    this->a=a;
    this->b=b;
}
int sum(int a,int b){
    return a+b;
}
friend void div(Demo x,Demo y);
};

void div(Demo o,Demo o1){

cout<<"half of a is "<<o.a/2<<" and of a is"<<o1.a/2<<endl;
}

int main(){
Demo obj(4,3),obj1(5,9);
div(obj1,obj);
    return 0;
}