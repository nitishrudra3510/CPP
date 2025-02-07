// #include<iostream>
// using namespace std;

// // void printHello(){
// //     cout<<"Nitish Kumar";
// // }

// int printHello(){
//     cout<<"Nitish Kumar"<<endl;
//     return 3;
// }
// int main(){
//     // function call / invoke
//     int a = printHello();

//     cout<<a<<" ";
//     return 0;
// }




// #include<iostream>
// using namespace std;

// // parameters pass 
// // int sum(int a, int b){
// //     int s = a+b;
// //     return s;
// // }
// // double sum(double a,double b){
// //     double s = a+b;
// //     return s;
// // }

// // literals -> kabhi change nahi hona - arguments hota hai gunction ke unders wo bhi hota hai..

// int minOfTwo(int a, int b){ // parameters
//     if(a<b){
//         return a;
//     }
//     else{
//         return b;
//     }
// }
// int main(){
//     // function call / invoke
//     // int a = sum(2.0980,5.97);

//     cout<<"min : "<<minOfTwo(2,3)<<endl; // arguments

//     // cout<<a<<" ";
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int factorial(int N){
//     if(N<0){
//         cout<<"Factorial is not defined  for the negative numebrs..";
//         return -1;
//     }
//     if(N==0 || N==1){
//         return 1;  // lastr statement hota hai iske badh is funvction me kuch bhi print nahi karega..
//     }
//     return N*factorial(N-1);
    
// }
// int main(){
//     int N;
//     cin>>N;
//     cout<<factorial(N);

//     return 0;
// }



// pass by value : copy of argument is passed to the function
// #include<iostream>
// using namespace std;
// int sum(int a, int b){
//     a = a+10;
//     b = b+10;
//     return a+b;
// }
// int main(){
//     int a = 4, b = 7;
//     cout<<sum(a, b);  // pass by value.. : jo bhi function ke under change hota hai.. wo main function ke under koi bhi change nahi karta hai
//     cout<<a;
//     return 0;
// }



// #include<iostream>
// using namespace std;
// int sumOfNum(int num){
//     int sum = 0;
//     for(int i=1; i<num; i++){
//         int lastdigit = num%10;
//         num = num/10;
//         sum+=lastdigit;
//     }
//     return sum;
// }
// int main(){
//     int num = 14644;
//     cout<<sumOfNum(num);  // pass by value.. : jo bhi function ke under change hota hai.. wo main function ke under koi bhi change nahi karta hai
//     cout<<" is the sum of "<<num;
//     return 0;
// }


#include<iostream>
using namespace std;
int factorial(int n){
    int fact = 1;

    for(int i=1; i<=n; i++){
        fact *= i;
    }
    return fact;
}

int nCr(int n, int r){
    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int n_fact_r = factorial(n-r);

    return (fact_n/(fact_r * n_fact_r));
}
int main(){
    int n=8;
    int r = 2;
    cout<<nCr(n, r);
    return 0;
}
