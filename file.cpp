#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream file ("sample.txt");//write in a file
    string s;

    getline(cin,s);
    file<<s;
    file.close();

    ifstream files("sample.txt");//read in a file
    string r;
    getline(files,r);
    cout<<r;
    files.close();

    return 0;
} 
