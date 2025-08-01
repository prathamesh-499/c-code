#include<iostream>
using namespace std;
class Person{
    public:
 virtual void fun(){
    cout<<"virtual function"<<endl;
}};
class Student:public Person{
    public:
void fun() override{
    cout<<"not virtual function"<<endl;}
void notfun(){
    cout<<"dwaw";
}
};


int main (){
Person* p1=new Student;
p1->fun();

delete p1;

return 0;
}