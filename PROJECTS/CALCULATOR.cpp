#include <iostream>
using namespace std;

void calcy(float n1,float n2,string op){
    if(op == "+"){
        cout<<n1+n2<<endl;
    }
    else if(op == "-"){
        cout<<n1-n2<<endl;
    }
    else if(op == "*"){
        cout<<n1*n2<<endl;
    }
    else if(op == "/"){
        cout<<n1/n2<<endl;
    }
    else if(op == "^"){
        int t = 1;
        while(n2>0){
            t = t*n1;
            n2 = n2-1;
        }
        cout<<t<<endl;
    }
    else if(op == "%"){
        int N1 =n1;
        int N2 =n2;
        cout<<N1%N2<<endl;
    }
    else{
        cout<<"Choose a valid operator"<<endl;
    }
}
int main(){
    float n1 ;
    float n2 ;
    string op;
    cout<< "Input First number :- ";
    cin>>n1;
    cout<< "Second number :- ";
    cin>>n2;
    cout<<"Type the operator from [ + , - , / , * , ^ ,% ] :- ";
    cin>>op;
    cout<<"Your output will be :- ";
    calcy(n1,n2,op);

}