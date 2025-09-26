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
    B& operator+=(B &b){
        this->x+=b.x;
        return *(this);
    }

};

void operator++(A &a,int){
    a.x=9;
}

class Complex{
        public:
    string s;
    int i,r;
    public:
    Complex(int i,int r):i(i),r(r){}
    Complex(string s):s(s){}
    Complex operator+(Complex &c){
        return Complex(i+c.i,r+c.r);
    }




};

int main(){

// A a(2,3);
// A a2(66,3);

// a2=a;
// cout<<a<<'\n';
// cout<<a2;
// B b1(31);
// B b=1;
// b+=b1;
//     cout<<b;

Complex c1(4,5);
Complex c2(3,2);
Complex c3(6,1);
c3.i=40;
cout<<c3.i<<c3.r;
cerr<<"errors helps gets";
return 0;
}





