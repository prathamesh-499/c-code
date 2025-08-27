// #include<iostream>
// #include<ctime>
// #include<chrono>
// using namespace std;
  
// int main (){

// time_t nowByCTime=time(0);

// auto now =chrono::system_clock::now();


// cout<<endl<<ctime(&nowByCTime)<<endl<<now;
// return 0;
// }


#include <iostream>
#include <chrono>
#include <ctime>
#include <iomanip>
using namespace std;

int main() {
    auto now = chrono::system_clock::now();
    time_t t = chrono::system_clock::to_time_t(now);

    tm *local = localtime(&t);

    cout << "Current date and time: "
         << put_time(local, "%Y-%m-%d %H:%M:%S") << endl;

    return 0;

}
