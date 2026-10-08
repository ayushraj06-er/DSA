#include<iostream>
using namespace std;
int main(){
    char name[20];
    cout<<"Enter String :";
    cin>>name;
    int cnt=0;
    for(int i=0;name[i]!='\0';i++){
        cnt++;
    }
    cout<<cnt;
    return 0;;
}