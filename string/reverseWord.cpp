#include<iostream>
#include<string>
using namespace std;
// bool checkSpace (char ch){
//     if(ch>='a' && ch<='z' || ch>='A' && ch<='z' || ch>='0' && ch<='9'){
//         return 1;
//     }
//     return 0;
// }
void reverseString(char string[],int size){
    int i=0;
    int j=size-1;
    while(i<=j){
        swap(string[i],string[j]);
        i++;
        j--;
    }
}
void reverseWord(char string[]){
    for(int i=0;string[i]<='\0';i++){
        if(string[i]==' '){
           reverseString(string,i); 
        }
        if(string[i]=='\0'){
           reverseString(string,i);
        }
    }
}
int main(){
    char string[100];
    cout<<"Enter String : ";
    cin.getline(string,100);
    reverseWord(string);
    cout<<string;
    return 0;
}