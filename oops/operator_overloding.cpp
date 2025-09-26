#include<iostream>
#include<string>
#include<list>
using namespace std;
  
class Person{
    public:
    int age;
    string name;
    Person(int a,string n){
        name=n;
        age=a;
    }
    bool operator==(const Person& p)const   /*<-- This const is to tell that the this object will not be modified either the first const is for the perameter object*/
    {//for remove() function below 
        return name==p.name;//name == this->name
    }
};

class Crowd{
    public:
    list<Person> people;
    void operator+=(Person& p){
        people.push_back(p);
    }
    void operator=(Crowd &c){
        people.clear();
        for(Person p:c.people){
            people.push_back(p);
        }
    }
    void operator-=(Person& p){
        people.remove(p);
    }

};

ostream& operator<<(ostream &COUT,Person &P){
    COUT<<"Name:"<<P.name<<'\n';
    COUT<<"Age:"<<P.age<<'\n';
    return COUT;
}

int main (){
    Person p(37,"Not know");
    Person p1(27,"know");
    Crowd c;
    c+=p;
    c+=p1;
    c-=p1;
    for(Person p:c.people){
    cout<<p;}
    cout<<p1<<p;



return 0;
}