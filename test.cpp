#include <iostream>
#include<string>
using namespace std;
class Person{
    public:
    
}
class Student{
    public:
string name;
float cgpa;
string* skill;

    Student(string name,float cgpa,string skill){
    this->name=name;
    this->cgpa=cgpa;
    this->skill=new string;
    *(this->skill)=skill;

    }
    ~Student(){
        delete skill;
        cout<<"destructor bom";
    }
    Student(Student &obj){
        name=obj.name;
        cgpa=obj.cgpa;
        skill=new string;
        *skill=*obj.skill;

    }
    void display(){
        cout<<endl<<name<<endl;
        cout<<cgpa<<endl;
        cout<<*skill<<endl;

    }
    
};
int main(){
Student obj("prath",8.6,"py,css,html,c++");
obj.display();

return 0;
}
