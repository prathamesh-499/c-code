#include<iostream>
using namespace std;

int decToBin(int x){
int ans=0,p=1;
while(x>0){
ans+=(x%2)*p;//1
p*=10;
x/=2;//2
//the 1 and 2 are only onces which make the number loop through its binary form
//the p *=10 makes the binary number be added and represented in decimal part
}
return ans;
}


int main (){

cout<<decToBin(10);

return 0;
}