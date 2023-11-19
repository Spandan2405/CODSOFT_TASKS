#include<iostream>
using namespace std;

    int avg_marks(int s1,int s2,int s3){
        int  x = (s1+s2+s3)/3;
        cout<<"Average marks : ";
        return x;
    }
    int highest_marks(int s1,int s2,int s3){
        if(s1>=s2 && s1>=s3){
           cout<<"Highest marks : ";
           return s1; 
        }
        else if(s2>=s3 && s2>=s1){
           cout<<"Highest marks : ";
           return s2; 
        }
        else{
           cout<<"Highest marks : ";
           return s3;
        }
    }
    int lowest_marks(int s1,int s2,int s3){
        if(s1<=s2 && s1<=s3){
           cout<<"Lowest marks : ";
           return s1; 
        }
        else if(s2<=s3 && s2<=s1){
           cout<<"Lowest marks : ";
           return s2; 
        }
        else{
           cout<<"Lowest marks : ";
           return s3; 
        }
    }
    
int main(){
    string n1,n2,n3;
    int s1,s2,s3;
    cout<<"Name of 1st person: ";
    cin>>n1;
    cout<<"Enter marks: ";
    cin>>s1;
    cout<<"Name of the 2nd person: ";
    cin>>n2;
    cout<<"Enter marks: ";
    cin>>s2;
    cout<<"Name of the 3rd person: ";
    cin>>n3;
    cout<<"Enter marks: ";
    cin>>s3;
    cout<<avg_marks(s1,s2,s3)<<endl;
    cout<<highest_marks(s1,s2,s3)<<endl;
    cout<<lowest_marks(s1,s2,s3)<<endl;
    
}