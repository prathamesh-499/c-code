#include<iostream>
using namespace std;

int main (){

int a=29;
int *p=&a;
int** pp=&p;

//val &a val
//&a &p &p


// cout<<*(&a)<<"\n"<<&a<<endl<<*p;
// cout<<endl<<**(&p)<<"\n"<<&p<<endl<<***(&pp);
int arr[5]={1,2,3,4,5};
int *ptr=arr;//1
int*ptr2=ptr+3;//4
cout<<ptr<<endl<<ptr2;
cout<<ptr2-ptr;
cout<<(ptr2>ptr);//1
// pointers points to start of the of int so ptr2-ptr=3 has 2 int between

    return 0;}