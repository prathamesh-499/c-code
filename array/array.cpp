#include <iostream>
using namespace std;

// doc string
void increment(int &num)
{
    num++;
    cout << num << endl;
}

int main()
{
    int number = 5;
    // Passing 'number' by reference
    increment(number); 
    cout << number << endl;
    return 0;
}