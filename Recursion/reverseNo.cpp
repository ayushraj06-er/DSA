#include<iostream>
using namespace std;
void printName(int i,int m){
    if(i>m)return;
    printName(i+1,m);
    cout<<i<<" ";
}
int main(){
    int n;
    cout<<"Enter N:";
    cin>>n;
    printName(1,n);
    return 0;
}  