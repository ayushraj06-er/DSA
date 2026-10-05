#include<iostream>
using namespace std;
int myPow(int x,long long n){
    if(n==0)return 1;
        if (n % 2 == 0) {
        return myPow(x * x, n / 2);
        }
        if(n<0){
            x=1/x;
            n=-n;
        }
        return x*myPow(x,n-1);
}
int main(){
    int m,x;
    cout<<"Enter X :";
    cin>>x;
     cout<<"Enter Power of X :";
    cin>>m;
    cout<<myPow(x,m);
    return 0;
}