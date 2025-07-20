#include <iostream>
using namespace std;
//abstract class or use abstract keyword
class Pc{
    public:
virtual void x() =0;//pure virtual function
int c=34;
};
class Gpu:public Pc{
    public:
    void x(){
        cout<<"ram=8\n";
    }
};
int main()
{
Gpu o;
o.x();
    return 0;
}