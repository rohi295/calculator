#include<iostream>
using namespace std;
int main (){
    int num1;
    cin>> num1;
    int (op);
    cin>>op;
    int num2;
    cin>> num2;
    switch (op){
        case '+':
        cout <<num1+num2<<endl;
        break;

        case '-':
        cout<<num1-num2<<endl;
        break;

        case '*':
        cout<<num1*num2<<endl;
        break;

        case '/':
        cout<<num1/num2<<endl;
        break;

        default:
        cout<<"invalid operator"<<endl;
        return 0;
    }

    
}


