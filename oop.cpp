#include<iostream>
using namespace std;

class Appo{

int secrect=69;
string name;
string d_t;
string doc_name;

public:
int app_id;

Appo (string name,int app_id,string d_t,string doc_name){
    this->name =name;
    this->app_id=app_id;
    this->doc_name=doc_name;
    this->d_t=d_t;
}

void display(){

cout<<name<<endl;
    cout<<d_t<<endl;
cout<<app_id<<endl;
cout<<doc_name<<endl;
}
};


int main (){
    int cho;

string name="prath";
string d_t="9:00am";
int app_id=277;
string doc_name="God";
   

Appo obj(name,app_id,d_t,doc_name);
Appo obj1(obj);

    obj1.display();

    return 0;
}