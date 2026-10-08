#include<iostream>
using namespace std;
int countLength(char name[]){
    int cnt=0;
    for(int i=0;name[i]!='\0';i++){
        cnt++;
    }
    return cnt;
}
void reverseString(char name[]){
    int i=0;
    int j=countLength(name)-1;
    while(i<=j){
        swap(name[i],name[j]);
        i++;
        j--;
    }

}
int main(){
    char name[10];
    cout<<"Enter Name : ";
    cin>>name;
    reverseString(name);
    cout<<"reversed name is : ";
    cout<<name<<endl;
    return 0;
}