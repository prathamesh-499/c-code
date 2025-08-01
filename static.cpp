#include<iostream>
using namespace std;
void x(){
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
    if (1){
     static Demo o2;
    Demo o1;
    }
// cout<<Demo::i;
cout<<Demo::a;

cout<<"i do not know what to write this is lorem\n";

return 0;
}