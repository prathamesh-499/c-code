#include <iostream>
#include<string>
using namespace std;
class Person{
    public:
    string name;
    Person(){
        cout<<"base default"<<endl;
    }
    ~Person(){
        cout<<endl<<"boom!boom!"<<endl;
    }
};
class Student:public Person{
    public:

float cgpa;


    Student(string name,float cgpa){
    this->name=name;
    this->cgpa=cgpa;


    }
    ~Student(){
        cout<<"destructor bom";
    }
    Student(Student &obj){
        name=obj.name;
        cgpa=obj.cgpa;

    }
    Student(){
        cout<<"derived default"<<endl;
    }
    void display(){
        cout<<endl<<name<<endl;
        cout<<cgpa<<endl;

    }
    
};
int main(){
Student obj;


return 0;
}
