#include<iostream>
using namespace std;

int main (){

int a=29;
int *p=&a;
int** pp=&p;

//val &a val
//&a &p &p


cout<<*(&a)<<"\n"<<&a<<endl<<*p;
cout<<endl<<**(&p)<<"\n"<<&p<<endl<<***(&pp);

    return 0;}