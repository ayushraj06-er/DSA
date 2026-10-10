#include<iostream>
#include<string>
using namespace std;
char maxOccChar(string s){
    int arr[26]={0};
    int num=0;
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        num=ch-'a';
        arr[num]++;
    }
    int maxi=-1,ans=0;
    for(int i=0;i<26;i++){
         if(arr[i]>maxi){
            ans=i;
            maxi=arr[i];
         }
    }
    return ans+'a';
   
}

int main(){
    string s;
    cin>>s;
    cout<<maxOccChar(s);
    return 0;
}
