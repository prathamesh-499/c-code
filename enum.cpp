// #include <iostream>
// using namespace std;

// class A {
// public:
//     int value;
// };

// class B : public A {};
// class C : public A {};
// class D : public B, public C {};

// int main() {
//     D obj;
//     // obj.value = 5; // ❌ Ambiguous: Which A's value?
//     obj.B::value = 5; // ✅ Choose path through B
//     obj.C::value = 10; // ✅ Choose path through C
// }

#include <iostream>
using namespace std;

class Student {
private:
    string name="dwa";


    friend class Display;
};

class Display {
public:
void showStudentInfo(Student s){
    cout << "Name: " << s.name << endl;
}


};



int main() {
    Display d1;
    Student s;
    d1.showStudentInfo(s); 

    return 0;
}



