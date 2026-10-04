#include<iostream>
using namespace std;
int fact(int n){
    if(n==0)return 1;
    return n*fact(n-1);
}
int main(){
    int m;
    cout<<"Enter Number : ";
    cin>>m;
    cout<<fact(m);
    return 0;
}