#include<iostream>
using namespace std;
class Person{
    public:
 virtual void fun(){
    cout<<"virtual function"<<endl;
}

void notfun(){
    cout<<"cs";
}
};
class Student:public Person{
    public:
void fun() override{
    cout<<"not virtual function"<<endl;}
void notfun(){
    cout<<"dwaw";
}
};


int main (){
// p1 is a pointer that points to Student and is a type of Person 
Person* p1=new Student;
p1->fun();
p1->notfun();
delete p1;
Person p2;
p2.fun();

return 0;
}