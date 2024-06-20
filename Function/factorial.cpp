// #include<iostream>
// using namespace std;
// int fact(int n){
//     int fact = 1;
//     for(int i=2; i<=n; i++){
//         fact = fact*i;
//     }
//     return fact;
// }
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         cout<<fact(i)<<endl;
//     }
// }


#include<iostream>
using namespace std;
// int fact(int n){
//     int fact = 1;
//     for(int i=2; i<=n; i++){
//         fact = fact*i;
//     }
//     return fact;
// }
int main(){
    int n;
    cin>>n;
    int fact  = 1;
    for(int i=1; i<=n; i++){
        fact *= i;
        cout<<fact<<endl;
    }
    cout<<"factorial: "<<fact;
}