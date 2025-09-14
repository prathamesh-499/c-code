#include<iostream>
#include<fstream>
using namespace std;
class A{
    public:
    int x;
    int y;
    A(int x=0,int y=0){this->x=x;this->y=y;}
    A& operator = (A&a){
        this->x=a.x;
        return *this;
    }
    operator int(){
        return this->x;
    }
};
class B:public A{
    public:
    int x;
    B(int x=0):x(x){}


    operator int(){
        return x;
    }
    B operator+=(B &b){
        this->x+=b.x;
        return *(this);
    }

};

void operator++(A &a,int){
    a.x=9;
}

int main(){

A a(2,3);
A a2(66,3);

a2=a;
cout<<a<<'\n';
cout<<a2;
B b1(31);
B b=1;
b+=b1;
    cout<<b;

    return 0;
}