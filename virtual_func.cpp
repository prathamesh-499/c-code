#include<iostream>
using namespace std;
class Person{
    public:
 virtual void fun(){
    cout<<"virtual function"<<endl;
}};
class Student:public Person{
    public:
void fun (){
    cout<<"not virtual function"<<endl;}

};

int main (){
Person* p1=new Student;
p1->fun();
delete p1;
return 0;
}