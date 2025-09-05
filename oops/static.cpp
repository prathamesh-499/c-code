#include<iostream>
using namespace std;
void x_inc(){
static int x=1;
x++;
}

class Demo{
public:
Demo(){
    cout<<"con\n";
}
~Demo(){
    cout<<"des\n";
}
// int i=9;
static int a;
static void func(){
//idk
}
};
 int Demo::a =8;

int main (){

     static Demo* o3;
     
    if (1){
     static Demo o2;
     o3=&o2;
     o2.a=3;

    Demo o1;
    }
// Demo::a=Demo::a+1;
    cout<<o3->a;
     Demo o4;
     cout<<o4.a;


cout<<endl<<"i do not know what to write this is lorem\n";

return 0;
}