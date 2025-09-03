#include<iostream>
using namespace std;
int main (){
int c='A',n=5,p=1;

for (int i =1;i<=n;i++){//alphabate half triangle
    for(int j=1;j<=i;j++){
        cout<<char(c++);
    }
    cout<<endl;
}

for (int i =1;i<=n;i++){//hollow square
    cout<<'*';
    for(int j=1;j<=n-1;j++){
        if (i>=2&&i!=n){
            cout<<' ';
            continue;}      
        else{cout<<'*';}
    }
    cout<<'*';
    cout<<endl;}
cout<<endl;
for (int i =1;i<=n;i++){
    for(int j=1;j<=n-i;j++){
            cout<<" ";}
    for(int k=1;k<=i;k++){
        cout<<'*';
    }
    cout<<endl;}

for (int i =1;i<=n;i++){
    for(int j=1;j<=i;j++){
            cout<<p<< " ";
        p++;}
    cout<<endl;}

for (int i =1;i<=n;i++){//diamond pattern
    for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int k=1;k<=2*i-1;k++){
            cout<<"*";
        }
            cout<<endl;
    }
for (int i =n;i>=1;i--){
    for(int j=n-i;j>=1;j--){
        cout<<" ";
        }
    for(int k=2*i-1;k>=1;k--){
        cout<<"*";
        }
            cout<<endl;
    }

for (int i = 1; i <=n; i++)//butterfly pattern
{
    for (int j = 1; j<=i; j++)
    {
            cout<<'*';
    }
    for (int j = 1; j <=2*(n-i); j++)
    {
        cout<<" ";
    }
    for (int j = 1; j<=i; j++)
    {
            cout<<'*';
    }
    cout<<endl;
}
for (int i = n; i >=1; i--)
{
    for (int j = 1; j<=i; j++)
    {
            cout<<'*';
    }
    for (int j = 1; j <=2*(n-i); j++)
    {
        cout<<" ";
    }
    for (int j = 1; j<=i; j++)
    {
            cout<<'*';
    }
    cout<<endl;
}
for(int i=1;i<=n;i++)//0-1 triangle
{bool b=1;
    for (int j = 1; j<=i; j++)
    {
        cout<<b<<' ';
        b=!b;
    }  
    cout<<endl;
}

for (int i =1;i<=n;i++)//Rhombus Pattern
{
    for (int j = 1; j<=n-i; j++)
    {
            cout<<' ';
    }
    for (int j = 1; j <=n; j++)
    {
        cout<<"*";
    }  
    cout<<endl;
}


for (int i =1;i<=n;i++)//Palindromic Pattern with Numbers
{
    for (int j = 1; j<=2*(n-i); j++)
    {
            cout<<" ";
    }
    for (int j = i; j >=1; j--)
    {
        cout<<j<<' ';
    }
    for (int j = 2; j<=i; j++)
    {
            cout<<j<<' ';
    }
    cout<<endl;
}
    return 0;}