/*
#include<iostream>
using namespace std;
int main()
{
    char buttom;
    cout<< "Enter the buttom a, b, c, d & e : ";

    cin>>buttom;


    //if else condition
    // if(buttom=='a')
    // {
    //     cout<<"Namste";

    // }
    // else if(buttom=='b')
    // {
    //     cout<<"Hello";
    // }
    // else if(buttom=='c')
    // {
    //     cout<<"How are you";

    // }
    // else if(buttom=='d')
    // {
    //     cout<<"do you want to see";
    // }
    // else{
    //     cout<<"Anything";
    // }


    // switch 

    switch (buttom)
    {
    case 'a':
        cout<<"Hello";
        break;
    case 'b':
        cout<<"How are you"<<endl;
        break;
    case 'c':
        cout<< "Nameste" <<endl;
        break;
    case 'd':
        cout<<"HI"<<endl;
        break;
    case 'e':
        cout<<"ERscape"<<endl;
    default:
        cout<<"Nothing";
        break;
    }

}
*/

#include<iostream>
#include<string>
#include<vector>

using namespace std;
int main(){
    int num1;
    int num2;
    cout << " Enter two numbers : ";
    cin>>num1>>num2;


    char Operator;
    cout<<"Enter operator : ";
    cin >> Operator;

    switch (Operator)
    {
    case '+':
        cout<<num1+num2<<endl;
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
    case '%':
        cout<<num1%num2<<endl;
        break;
    default:
    cout<<"Invalid Operator";
        break;
    }
}