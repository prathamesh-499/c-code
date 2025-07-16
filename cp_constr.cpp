#include <iostream>
#include<string>
using namespace std;
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
    Student(Student &obj){
        name=obj.name;
        cgpa=obj.cgpa;
        skill=new string;
        *skill=*obj.skill;

    }
        ~Student(){
        delete skill;
        cout<<"destructor bom";
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
Student obj2(obj);
*(obj2.skill)="no";
obj2.display();
return 0;
}
