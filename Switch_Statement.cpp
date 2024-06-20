/*(
switch-> alternative of else-if statement;

//syntax:

switch (inter expression) {
    case constant1:
        do  this;
    
    case constant2:
        do this;
    
    case constant3:
        do this; 

    default:
        do this;
    }

)*/


//ques1: print the number of days which we want.
// #include<iostream>
// using namespace std;
// int main(){
//     int x;
//     cout<<"enter day number : ";
//     cin>>x;
//     switch(x){
//         case 1:
//             cout<<"Monday";
//             break;
//         case 2: 
//             cout<<"Tuesday";
//             break;
//         case 3: 
//             cout<<"Wednesday";
//             break;
//         case 4:
//             cout<<"Thursday";
//             break;
//         case 5: 
//             cout<<"Friday";
//             break;
//         case 6:
//             cout<<"Saturday";
//             break;
//         case 7:
//             cout<<"Sunday";
//             break;
//     }   
//     return 0;  
// }


/*
write a program to input month number and print the total number of dayds in 
month using switch case.


*/

// #include<iostream>
// using namespace std;
// int main(){
//     int x;
//     cout<<"enter month number : ";
//     cin>>x;
//     switch(x){
//         case 1:
//             cout<<"31"; // jan
//             break;
//         case 2: 
//             cout<<"28"; //february
//             break;
//         case 3: 
//             cout<<"31"; // march
//             break;
//         case 4:
//             cout<<"30"; // apri;
//             break;
//         case 5: 
//             cout<<"31";  // may
//             break;
//         case 6:
//             cout<<"31";  // june
//             break;
//         case 7:
//             cout<<"31";  // july
//             break;
//         case 8:
//             cout<<"31";  // aug
//             break;

//         case 9:
//             cout<<"30";  // sep
//             break;

//         case 10:
//             cout<<"31";  // oct
//             break;

//         case 11:
//             cout<<"30"; // nov
//             break;
//         case 12:
//             cout<<"31"; // dec
//     }   
//     return 0;  
// }





/*
#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter month number : ";
    cin>>x;
    // 1 3 5 7 8  10 12 -> 31 days
    // 3 6 9 11 -> 30 days
    // 2 -> 28 days
    switch((x<=7 && x%2!=0) || (x>=8 && x%2==0)){
        case 1:
        cout<<"31";
    }

    switch(x==4|| x==6 || x==9 || x==11){
        case 1:
        cout<<"x";
    }

    switch(x){
        case 2:
        cout<<"28";
    }


*/



/*
create the calculator

*/

// #include<iostream>
// using namespace std;
// int main(){
//     int a,b;
//     char op;
//     cout<<"Enter the problem : ";
//     cin>>a>>op>>b;
//     switch(op){
//         case '+':
//             cout<<a+b;
//             break;
//         case '-':
//             cout<<a-b;
//             break;
//         case '*':
//             cout<<a*b;
//         case '/':
//             cout<<a/b;

//         default:
//         cout<<"Invalid operation.";
//     }

// }

//predict the output:

// #include<iostream>
// using namespace std;
// int main(){
//     int k = 35; 
//     cout<<(k==35) << endl << (k==10) << endl << (k>=40);
//     return 0;
// }


//predict the output:

#include<iostream>
using namespace std;
int main(){
    int i = 65;
    char c = 'A';
    if(i==c){
        cout<<"P stands for PW wallah.";
    }

    else{
        cout<<"P stand for Google wallah.";
    }
    return 0;
}