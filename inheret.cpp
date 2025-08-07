#include <iostream>
#include<string>
using namespace std;
class Person{
    public:
    string name;
    string gender;
    Person(string name,string gender){
        this->name=name;
        this->gender=gender;
    }
    ~Person(){
        cout<<endl<<"base destructor"<<endl;
    }
    Person(){}
};
class Student:public Person{
    public:

float cgpa;


    Student(string name,float cgpa,string gender):Person(name,gender){
    this->cgpa=cgpa;
    }
    ~Student(){
        cout<<"destructor";
    }
    Student(Student &obj){
        name=obj.name;
        cgpa=obj.cgpa;

    }
    Student(){
        cout<<"derived default std"<<endl;
    }
    void display(){
        cout<<endl<<name<<endl;
        cout<<cgpa<<endl;
        cout<<gender<<endl;

    }
    
};
class Teacher:public Person{
public:
Teacher(){
    cout<<"teacher class"<<endl;
}
};
int main(){
Student obj("prat",4.6,"male");
obj.display();


return 0;
}
