#include<iostream>
using namespace std;

int main(){
    string s;
    cout<<"Enter a sentence: "<<endl;
    getline(cin,s); 
    int cnt =1;
    for(int i=0;i<s.length();i++){
        int x = s[i];
        if(s[i] == ' '){
            cnt++;
        }
    }  
    cout<<"Word Count : "<<cnt<<endl;
}