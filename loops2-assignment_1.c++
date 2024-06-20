//Predict the output
// #include<iostream>
// using namespace std;
// int main() {
// while ('1' < 2)
// cout << "In while loop" << endl;  // infinite loop chalega..
// }

//Predict the output

// #include<iostream>
// using namespace std;
// int main( ) {
// int t = 10;

// while (t /= 2) {
// cout << "Hello" << endl; // print 3 times of Hello;
// }
// }

// // predict te output;
// #include<iostream>
// using namespace std;
// int main( ) {
//     for(int x=1; x*x<=10; x++){
//         cout<<"In for loop"<<endl; //print 3 times of In for loop;
//     }
// }



// // predict te output;
// #include<iostream>
// using namespace std;
// int main( ) {
//     int x = 10;
//     int y=0;
//     while(x>=y){
//         x--;
//         y++;
//         cout<<x<<" "<<y<<endl;
//     }

// }


/*
WAP to print the sum of a given number and its reverse.
Sample Input : 12
Sample Output : 33 [12+21]
*/
// #include<iostream>
// #include<string>
// using namespace std;

// int main(){
//     int num;
//     cout << "Enter the number: ";
//     cin >> num;
//     int original_num = num;
//     string str = to_string(num);
//     int length = str.length();
//     int reversed = 0;

//     // Reversing the number
//     while(num > 0){
//         int digit = num % 10;
//         reversed = reversed * 10 + digit;
//         num /= 10;
//     }

//     // Adding the original number and its reverse
//     int sum = original_num + reversed;
    
//     cout << "Sum of " << original_num << " and its reverse (" << reversed << ") is: " << sum << endl;

//     return 0;
// }


// #include<iostream>
// using namespace std;

// int main() {
//     int num, sum = 0;
    
//     // Input the number
//     cout << "Enter the number: ";
//     cin >> num;
//     int reversed = 0;
   
//     // Compute the sum of digits
//     while(num != 0) {
//         int digits = num % 10;
//         sum += digits; // Add the last digit to the sum
//         reversed = 10*reversed+digits;
//         num /= 10;       // Remove the last digit from the number
//     }
    
//     // Output the sum
//     cout << "Sum of the digits: " << sum << endl;
//     cout<<"Reversed number is : "<<reversed;

//     return 0;
// }

/*
WAP to print the sum of all the even digits of a given number.
Sample Input : 4556
Output: 10
*/

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number : ";
//     cin>>n;
//     int sum = 0;
//     for(int i=0; i<=n; i++){
//         if(i%2==0){
//             cout<<i<<" ";
//             sum+=i;
//         }
        
//     }
//     cout<<"Sum : "<<sum<<endl;
// }



// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number : ";
//     cin>>n;
//     int sum = 0;
//     int i=0;

//     while(i<=n){
//         if(i%2==0){
//             cout<<i<<" ";
//             sum+=i;
//         }
//         i++;
//     }
//     cout<<"Sum : "<<sum<<endl;


// }


/*
Print the factorials of first ‘n’ numbers
Sample Input : 10
Output :
1
2
6
24
120
720
5040
40320
362880
3628800
*/

// #include<iostream>
// using namespace std;

// // void factorials(int n){
// //         return factorials(n*(n-1))
// //     }
// int main(){
//     int n;
//     cout<<"Enter the number : ";
//     cin>>n;

//     int var = 1;
//     int i = 1;
//     while(i<=n){
//        var *= i; 
//        i++;
//     }
//     // for(int i=1; i<=n; i++){
//     //     var = var*i;
//     // }
//     cout<<var<<endl;

// }



// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number : ";
//     cin>>n;

//     int var = 1;
//     int i = 1;
//     while(i<=n){
//        var *= i; 
//         cout<<var<<endl;    
//        i++;
//     }

//     // for(int i=1; i<=n; i++){
//     //     var = var*i;
        
//     // }
    

// }


/*
Print first ‘n’ fibonacci numbers.
Sample Input : 10
Output :

1 1 2 3 5 8 13 21 34 55
*/


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int first_t = 0;
//     int second_t = 1;
//     if(n==0 || n==1){
//         return 1;
//     }
//     int next = 0;
//     for(int i=1; i<=n; i++){
//         next = first_t +second_t;
        
//         first_t=second_t;
//         second_t=next;
        
//     }
//     cout<<next<<" ";

//     return 0;

    
// }


// #include<iostream>
// using namespace std;
// int main() {
//  int n;
//  cout<<"enter nth term";
//  cin>>n;
//  int a=0,b=1,sum=0;
//  for(int i=1;i<=n-2;i++){
//     sum =a+b;
//     a=b;
//     b=sum;
//  }cout<<b;
//  return 0;
// }
// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter the number of terms: ";
//     cin >> n;

//     int first_t = 0;
//     int second_t = 1;
//     int sum = 0;
    
//     if (n == 1) {
//         cout << "Fibonacci series up to " << n << " terms: " << first_t << endl;
//         cout << "Sum is: " << first_t << endl;
//         return 0;
//     }
    
//     cout << "Fibonacci series up to " << n << " terms: ";
//     cout << first_t << " " << second_t << " ";
//     sum = first_t + second_t; // Initialize sum with the sum of the first two terms.

//     for (int i = 3; i <= n; i++) {
//         int next = first_t + second_t;
//         cout << next << " ";
//         sum += next; // Add next term to the sum.
//         first_t = second_t;
//         second_t = next;
//     }
//     cout << "\nSum is: " << sum << endl;

//     return 0;
// }

/*
Two numbers are entered through the
keyboard. Write a program to find the value of one
number raised to the power of another.*/
\

// #include<iostream>
// using namespace std;
// int main() {
//  int a,b;
//  int power=1;
//  cout<<"enter a and b";
//  cin>>a>>b;
//  for(int i=1;i<=b;i++){
//     power=power*a;
//  }
//  cout<<power;
//  return 0;
// }


/*
Write a program to print out all Armstrong numbers between 1 and 500. If the sum of cubes of
each digit of the number is equal to the number itself, then the number is called an Armstrong
number. For example, 153 = ( 1 * 1 * 1 ) + ( 5 * 5 * 5 ) + ( 3 * 3 * 3 )
Output :
1
153
370
371
407
*/


// #include<iostream>
// #include<cmath>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter the number: ";
//     cin >> n;

//     int original_num = n;
//     int num_digits = 0;
//     int temp = n;
//     int sum = 0;

//     // Count number of digits
//     // while (temp != 0) {
//     //     temp /= 10;
//     //     num_digits++;
//     //     cout<<"Hello, ";
//     // }

//     temp = n;

//     // Calculate sum of cubes of digits
//     while (temp != 0) {
//         int digit = temp % 10;
//         sum += pow(digit, 3);
//         temp /= 10;
//     }

//     // Check if the number is an Armstrong number
//     if (sum == original_num) {
//         cout << original_num << " is an Armstrong number." << endl;
//     } else {
//         cout << original_num << " is not an Armstrong number." << endl;
//     }

//     return 0;
// }


