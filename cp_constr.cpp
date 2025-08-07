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
// deep copy 
    // Student(Student &obj){
    //     name=obj.name;
    //     cgpa=obj.cgpa;
    //     skill=new string;
    //     *skill=*obj.skill;

    // }

//shallow copy
    Student(Student &obj){
        name=obj.name;
        cgpa=obj.cgpa;
        skill=obj.skill;

    }

/*In case of shallow copy Destructor will cause a error  "Segmentation fault (core dumped)"
Both obj and obj2 share the same skill pointer in shallow copy
so it will try to delete it to times. 
and cout<<"destructor"    <<endl   ; make a difference somehow 
obj2 is destroyed first becuase of stack
*/
        ~Student(){
        delete skill;
        cout<<"destructor";
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
obj.display();

return 0;
}
