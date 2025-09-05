#include<iostream>
using namespace std;
class Demo;
class isd{
    public:
    int no_use(Demo o);
};
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
friend int isd::no_use(Demo o);
friend void div(Demo x,Demo y);
};

    int isd::no_use(Demo o){
        return o.a+o.b;
    }
void div(Demo o,Demo o1){

cout<<"half of a is "<<o.a/2<<" and of a is "<<o1.a/2<<endl;
}


int main(){
Demo obj(4,3),obj1(8,9);
isd a;
cout<<a.no_use(obj);
div(obj,obj1);
    return 0;
}