#include<iostream>
using namespace std;
void sum(int summ,int i,int n){
    if(i>n){
        cout<<summ;
        return;
    }
    sum(summ+i,i+1,n);
}
int  main(){
    int m;
    cout<<"Enter N : ";
    cin>>m;
    sum(0,1,m);
    return 0;
}