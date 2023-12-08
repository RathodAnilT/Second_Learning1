# include<iostream>
using namespace std;

int main(){

    double num1, num2;
    string  operation;

    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"Enter the Operation (+, -, *, /): ";
    cin>>operation;
    cout<<"Enter the second number: ";
    cin>>num2;

    // if statement checking the entered operation
    if(operation == "+"){
        cout<< num1 + num2;
    }
    else if(operation == "-"){
        cout<< num1 - num2;
    }
    else if(operation == "*"){
        cout<< num1 * num2;
    }
    else if(operation == "/"){
        cout<< num1 / num2;
    }
    else{
        cout<<"Not a recognized operation!!";
    }

    return 0;
}