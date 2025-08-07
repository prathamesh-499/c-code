#include<iostream>
#include<cmath>
using namespace std;

int is_Armstrong(int num){
int count=0,digit,ori=num,temp=0;
    while(num!=0){
        num/=10;
        count++;
    }
num=ori;
    while (ori!=0)
    {
        digit=ori%10;
        temp+=pow(digit,count);
        ori/=10;
    }
    return temp==num;
    

}


int main (){

int num=153;

cout<<is_Armstrong(num);
return 0;
}