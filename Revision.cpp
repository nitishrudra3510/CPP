#include<iostream>
// for c lan: #include<bits/std++.h>
#include<math.h> // for maths algorithms
#include<string>
using namespace std;

// int main(){
//     cout<<"hey nitish"<<"\n"; // we can use endl for change the line.
//     cout<<"Rudra";
//     return 0;
// }


// int main(){
//     int x,y;
//     cin>>x>>y;
//     cout<<"value of x: "<< x<<" and y "<<y;
//     return 0;
// }


//int main(){
    //int
    // int x;
    // //long 
    // long y = 10; // for long range
    // cin>>y;

    // long long value = 1500383024; // for wide range
    // cout<<value<<"\n";


    // // float, double, long double : 4 bytes, 8 bytes 16 bytes

    // float value1 = 5.6;
    // float s = 6;
    // cout<< s <<" "<< value1;

    // string and getline();
    // string s1;
    // string s2;
    // cin>>s1>>s2;
    // cout<<s1<<" "<<s2<<endl;
    // string str;
    // getline(cin, str); // to get the multiple of the words;
    // cout<<str;

    // char
    // char ch;
    // cin >> ch;
    // cout<<ch<<endl;


    
    // return 0;
//}


// if else 
//int main(){
    // Write a program that takes an input of age&
// and prints if you are adult or not
    // int age;
    // cin >> age;
    // if(age>18){
    //     cout<<"Adult";
    // }else if(age==18)
    // {
    //     cout<<"Adult"<<endl;
    // }else{
    //     cout<<"Not Adult";
    // }


/*
    A school has following rules for grading system:
a. Below 25 - F
b. 25 to 44 - E
c. 45 to 49 - D
d. 50 to 59 - C e.
60 to 79 - B
80 to 100 - A
Ask user to enter marks and print the corresponding grade.
*/
    // int marks;
    // cin>>marks;

    // if(marks>= 80 && marks<=100){
    //     cout<<"A"<<endl;
    // }
    // else if(marks>=60 && marks <=79){
    //     cout<<"B"<<endl;
    // }
    // else if(marks>=50 && marks<=59){
    //     cout<<"C"<<endl;
    // }
    // else if(marks>=45 && marks<= 49){
    //     cout<<"D"<<endl;
    // }
    // else if(marks<=25 && marks>=44){
    //     cout<<"E"<<endl;
    // }
    // else{
    //     cout<<"F"<<endl;
    // }



    /*
Take the age from the user and then decide accordingly
1. If age < 18,
print→> not eligible for job
2. If age >= 18,
print→> "eligble for job"
3. If age >= 55 and age <= 57,
print→> "eligible for job, but retirement soon."
4. If age > 57
print-> "retirement time"
*/

    // int age;
    // cin>>age;
    // if(age<18){
    //     cout<<"Not eligible for job";
    // }else if(age<=57){
    //     cout<<"You are eligible for job";
    //     if(age >= 55){
    //         cout<<"but, retirement soon";
    //     }
    // }
    // else{
    //     cout<<"Retirement time";
    // }


    /*
Take the day no and print the corresponding day
for 1 print Monday,
for 2 print Tuesday and so on for 7 print Sunday.
*/

//     int day;
//     cin>>day;

//     switch(day){
//         case 1:
//             cout<<"Monday"<<endl;
//             break;
//         case 2:
//             cout<<"Tuesday"<<endl;
//             break;
//         case 3:
//             cout<<"Wednesday"<<endl;
//             break;
//         case 4:
//             cout<<"Thursday"<<endl;
//             break;
//         case 5:
//             cout<<"Friday"<<endl;
//             break;
//         case 6:
//             cout<<"Saturday"<<endl;
//         default:
//             cout<<"Invalid day"<<endl;
//     }
//     return 0;
// }


// Array:

// int main()
// {
    // double can store here, int and float also.. 
    // array has store the element in consequitive memeory address;
    // one d-array and two d array;
    // int arr[5];
    // cin>>arr[0]>>arr[1]>> arr[2]>>arr[3]>>arr[4];

    // arr[2]=100;
    // cout<<arr[2]<<endl;
    // cout<<arr[4];

    // 2-d array

//     int arr[3][5];
//     arr[1][3]=100;
//     cout<<arr[1][3];
//     return 0;
// }

// int main(){
//     //string
//     string s = "nitish rudra";
//     int len = s.size();
//     s[len-1]='z';
//     cout<<s<<endl;
//     cout<<s[len-1]<<endl;
//     cout<<s[2];
//     return 0;
// }


//int main(){
    // for loop;
    // int i;
    // for(i=1; i<=10; i=i+2){
    //     cout<<"Nitiish "<<i<<endl;
    // }
    // cout<<i<<endl;


    // while loop;
    // int i=1;
    // while(i<=5){
    //     cout<<"Striver "<<i<<endl;
    //     i+=1;
    // }

    // int i=1;
    // while(i<=20){
        
    //     if(i%2==0){
    //     cout<<"even number "<<i<<endl;
    //     }
    //     else{
    //         cout<<"odd number "<<i<<endl;
    //     }
    //     i=i+1;
    // }


    // do-while loop; excute minmum one times

//     int i=1;
//     do{
        
//         if(i%2==0){
//         cout<<"even number "<<i<<endl;
//         }
//         else{
//             cout<<"odd number "<<i<<endl;
//         }
//         i=i+1;
//     }while(i<=20);
//     cout<<i<<" ";
    
// }



// fucntions:
/*
1. Function are set of code which performs something for you
2. Functions are used to modularise code
3. Functions are used to increases readability
4. Functions are used to use same code multiple times.
// VOID- which does not return anything\
// return 
// parameterized functions
// non parameterized functions

*/
// void printName(string name){
//     cout<<"nitish"<<name<<endl;
// }
// int main(){
//     string name;
//     cin >> name;
//     printName(name);

//     string name2;
//     cin >> name2;
//     printName(name2);
//     return 0;
// }

// take two number and prints its num;

// with return function
// int sum(int num1, int num2){
//     int num3 = num1 + num2;
//     return num3;
// }
// int main(){
//     int num1, num2;
//     cin >> num1>>num2;
//     int res = sum(num1, num2);
//     cout<<res;
//     return 0;
// }


// without return function
// void sum(int num1, int num2){
//     int num3 = num1 + num2;
//     cout<< num3;
// }
// int main(){
//     int num1, num2;
//     cin >> num1>>num2;
//     sum(num1, num2);
//     return 0;
// }

// int minn(int num1, int num2){
//     if(num1<=num2){
//         return num1;
//     }else{
//         return num2;
//     }
// }
// int main(){
//     int num1, num2;
//     cin>>num1>>num2;
//     int minimum = minn(num1, num2);
//     cout<<minimum;
// }

// pass by values: it is not take original value of elements..

// void dosomething(int num){
//     cout<< num << endl;
//     num += 5;

//     cout<< num << endl;
//     num+=5;
//     cout<< num << endl;

// }
// int main(){
//     int num = 10;
//     dosomething(num);
//     cout<<num << endl;

// }


// void dosomething(string num){
//     cout<< num << endl;
//     num[0]='p';

//     cout<< num << endl;
// }
// int main(){
//     string num = "nitish";
//     dosomething(num);
//     cout<<num << endl;

// }

// pass by reference: & it takes the address of the element, it takes the original values.

// void dosomething(int &num){
//     cout<< num << endl;
//     num += 5;

//     cout<< num << endl;
//     num+=5;
//     cout<< num << endl;

// }
// int main(){
//     int num = 10;
//     dosomething(num);
//     cout<<num << endl;

// }
void doSomething(int arr[], int n){
    arr[0] += 100;
    cout<<"Value inside the function "<<arr[0]<<endl;
}
int main(){
    
    int n = 5;
    int arr[n];
    for(int i=0; i<n-1; i++){
        cin>>arr[i];
    }
    doSomething(arr, n);
    
    cout<<"Value inside int main "<<arr[0]<<endl;
    return 0;
}