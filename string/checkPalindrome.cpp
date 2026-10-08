#include<iostream>
using namespace std;
int cntLength(char string[]){
    int cnt =0;
    for(int i=0;string[i]!='\0';i++){
        cnt++;
    }
    return cnt;
}
int checkPalindrome(char string[]){
    int i=0;
    int j=cntLength(string)-1;
    while(i<=j){
        if(string[i]!=string[j])return 0;
        i++;
        j--;
    }
    return 1;


}
int main(){
    char string[20];
    cout<<"Enter String : ";
    cin>>string;
    if(checkPalindrome(string)){
        cout<<"Palindrome !!";
    }else{
        cout<<"Not Palindrome !!";
    }
    return 0;
}