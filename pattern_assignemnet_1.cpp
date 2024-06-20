/*
Print the following pattern
1 1 1 1
2 2 2 2
3 3 3 3
4 4 4 4
*/

// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1; i<=4; i++){
//         for(int j=1; j<=4; j++){
//             cout<<i<<" ";
//         }
//         cout<<endl;
//     }
    

// }

/*
Print the following pattern
Input: n = 4
Output:
1 2 3 4
1 2 3
1 2
1
*/


// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=4; i>=1; i--){
//         for(int j=1; j<=i; j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
// }


/*
Print the following pattern
Input: n = 4
Output:
A
A B
A B C
A B C D
*/


// #include<iostream>
// using namespace std;
// int main(){
//     for(char i='A'; i<='D'; i++){
//         for(char j='A'; j<=i; j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
// }


/*
Print the following pattern
Input: n = 4
Output:
1
A B
1 2 3
A B C D
1 2 3 4 5
*/

// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1; i<=5; i++){
//         for(int j=1; j<=i; j++){
//             if(i==)
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }

    
// }


/*
 Print the given pattern

1
1 3
1 3 5
1 3 5 7

*/

// #include<iostream>
// using namespace std;
// int main(){
//     int n = 4, m = 7;
//     for(int i=1; i<=n; i++){
//         int num = 1;
//         for(int j = 1; j<=i; j++){
          
//             cout<<num<<" ";
//             num+=2;
            
//         }
//         cout<<endl;
      
//     }
// }


/*
  *  
  *
*****
  *
  * 
*/



// #include<iostream>
// using namespace std;
// int main(){
//     int n=5;
//     int mid = n/2 +1;
//     for(int i =1 ; i<=n; i++){
//         for(int j = 1; j<=n; j++){
//             if(i==mid || j==mid){
//                 cout<<"*";
//             }else
//                 cout<<" ";
//         }
//         cout<<endl;
//     }
// }


/*
*   *
 * *
  *
 * *
*   *

*/

#include<iostream>
using namespace std;
int main(){
    int n = 5;
    for(int i=1; i<=n; i++){
        for(int j=i; j<=n; j++){
            if(i==j){
                cout<<"*";
            }
        }

        cout<<endl;
    }
}