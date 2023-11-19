#include<iostream>
using namespace std;

int main(){
    
    int x = 75;
    cout<<"Guess a number in between 0 to 100 "<<endl;
    cout<<"You have 5 chances"<<endl;
    
    int n;
    int count = 5;
    while(count-->0){
        
        cin>>n;
        if(n > x+10){   
            cout<<"Too Large. ";
        }
        else if(n < x-10){
            cout<<"Too Small. ";
        }
        else if(n >= x-10 && n < x){
            cout<<"Close enough,go higher. ";
        }
        else if(n <= x+10 && n > x){
            cout<<"Close enough,go smaller. ";
        }
        else if(n<0 || n>100){
            cout<<"Enter a valid number in the given range.";
        }
        else if(n==x){
            cout<<"Correct!.You guessed it. "<<endl;
            break;
        }
        cout<<"Try again"<<endl;
    }
    if(count>0){
        cout<<"Yaay!. You guessed it right in ";
        cout<<5-count;
        cout<<" attempts"<<endl;
    }
    else{
        cout<<"You are out of guesses"<<endl;
    }

}