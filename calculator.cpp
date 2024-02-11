#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    char op;
    cout<<"WELCOME ,ENTER TWO NUMBERS TO CALCULATE: ";
    cin>>num1>>num2;
    cout<<"CHOOSE A OPERATOR (+,-,*,/,%) :";
    cin>>op;
    switch(op){
        case '+':
          cout<<"THIS PERFORMS ADDITION "<<endl;
          cout<<num1<<" + "<<num2<<" = "<<num1+num2;
          break;

        case '-':
          cout<<"THIS PERFORMS SUBTRACTION "<<endl;
          cout<<num1<<" - "<<num2<<" = "<<num1-num2;
          break;

        case '*':
          cout<<"THIS PERFORMS MULTIPLICATION "<<endl;
          cout<<num1<<" * "<<num2<<" = "<<num1*num2;
          break;

        case '/':
          cout<<"THIS PERFORMS DIVISION "<<endl;
          cout<<num1<<" / "<<num2<<" = "<<num1/num2;
          break;

        case '%':
          cout<<"THIS PERFORMS MODULUS FUNCTION "<<endl;
          cout<<num1<<" % "<<num2<<" = "<<num1%num2;
          break;      

        
    }
    return 0;
}