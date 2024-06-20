/*Take 2 integers input and print the greatest of them
Input 1: a = 5 b = 7
Output 1: second number 7 is the largest.
Input 2: a = 12 b = 1
Output 2 : first number 12 is the largest.
Note : It is ensured that the two numbers will be different.*/


// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     int b;
//     cin>> a>> b;

//     if(b>a){
//         cout<<"second number " << b<< "is greater than "<<a<<endl;
//     }

//     else{
//         cout<<"second number is not grater than 1st"<<endl;
//     }

// }


// #include<iostream>
// using namespace std;
// int main(){
//     int a=12;
//     int b=1;
   
//     if(a>b){
//         cout<<"1st number " << a<< " is greater than "<<b<<endl;
//     }

//     else{
//         cout<<"second number is not grater than 1st"<<endl;
//     }

// }


/*
ques 2:
Given the radius of the circle, predict whether numerically the area of this circle is larger than the
circumference or not.
Input 1: radius = 4
Output 1: Area is greater than circumference.
Explanation: area = 3.14 * 4 * 4 = 50.24 unit2
Perimeter = 2 * 3.14 * 4 = 25.12 unit
Therefore area > perimeter.

*/

// #include<iostream>
// using namespace std;
// int main(){
//     int radius;
//     cout<<"Enter the radius of teh circle: ";
//     cin>> radius;
//     float area_circ = 3.14*radius*radius;
//     float circumference_cir = 2*3.14*radius;

//     if(area_circ> circumference_cir){
//         cout<<"Area is greater than circvumference"<<endl;
//     }

//     else{
//         cout<<"Area is less than circvumference"<<endl;
//     }


// }


/*
ques 3:

Any year is input through the keyboard. Write a program to determine whether the year is a leap year
or not. (Considering leap year occurs after every 4 years)
Input 1: 1976
Output: yes
Input 2: 2003
Output: no

*/

// #include<iostream>
// using namespace std;
// int main(){
//     int year;
//     cout<<"Enter year: ";
//     cin>>year;
//     if((year%400==0 ) || (year%4==0 && year%100!=0)){
//         cout<<"yes";

//     }
    
//     else{
//         cout<<"no";
//     }

// }


// #include <iostream>
// using namespace std;
// int main() {
//     int year;
    
//     cout << "Enter a year: ";
//     cin >> year;

//     if (year % 4 == 0) {
//         if (year % 100 == 0) {
//             if (year % 400 == 0) {
//                 cout << year << " is a leap year." << endl;
//             } else {
//                 cout << year << " is not a leap year." << endl;
//             }
//         } else {
//             cout << year << " is a leap year." << endl;
//         }
//     } else {
//         cout << year << " is not a leap year." << endl;
//     }

//     return 0;
// }



// #include<iostream>
// using namespace std;

// bool isLeapYear(int year){
//     if((year %4==0 && year %100!=0) || (year%400==0)){
//         return true;
//     }
//     else
//         return false;
// }
// int main(){
//     int year;
//     cout<<"Year : ";
//     cin>>year;
//     if(isLeapYear(year)){
//         cout<< year<< " is leap year"<<endl;

//     }
//     else{
//         cout<<year<<" is not a leap year"<<endl;
//     }
// }


/*
ques 4:
Given the length and breadth of a rectangle, write a program to find whether numerically the area of
the rectangle is greater than its perimeter.
Input 1: length = 5 breadth = 7

Output 1: Area is greater than perimeter.

*/

// #include<iostream>
// using namespace std;
// int main(){
//     int length, breadth;
//     cout<<"Length of rectangle and breadth of rectangle : ";
//     cin>>length>>breadth;
//     int area_rect = length*breadth;
//     int peri_rect = 2*(length+breadth);

//     if (area_rect>peri_rect){
//         cout<<"Area id graeter than perimeter ";
//     }else{
//         cout<<" Area is not greate than perimeter";
//     }
// }


// #include<iostream>
// using namespace std;

// void compareAreaPerimeter(int length, int breadth) {
//     int area_rect = length * breadth;
//     int peri_rect = 2 * (length + breadth);

//     if (area_rect > peri_rect) {
//         cout << "Area is greater than perimeter." << endl;
//     } else {
//         cout << "Area is not greater than perimeter." << endl;
//     }
// }

// int main() {
//     int length, breadth;
//     cout << "Enter the length and breadth of the rectangle: ";
//     cin >> length >> breadth;

//     compareAreaPerimeter(length, breadth);

//     return 0;
// }


/*
ques 5:
Write a program to input sides of a triangle and check whether a triangle is equilateral, scalene or
isosceles triangle.
Input : side1 = 5 side2 = 4 side3 = 4
Output: This is an Isosceles triangle.

*/


// #include<iostream>
// using namespace std;
// int main(){
//     int side1, side2, side3;
//     cout<<"Enter the side of the triangle side1, side2 and side: ";
//     cin>>side1>>side2>>side3;

//     if(side1==side2 && side2==side3 ){
//         cout<<"Equilateral Triangle.";
//     }
//     else if(side1==side2 || side2==side3 || side3==side1){
//         cout<<"this is isosceles triangle";
//     }
//     else{
//         cout<<"this scalene triangle";
//     }
//  }


// using function
// #include<iostream>
// using namespace std;

// void checkTriangleType(int side1, int side2, int side3) {
//     if (side1 == side2 && side2 == side3) {
//         cout << "Equilateral Triangle." << endl;
//     }
//     else if (side1 == side2 || side2 == side3 || side3 == side1) {
//         cout << "This is an Isosceles triangle." << endl;
//     }
//     else {
//         cout << "This is a Scalene triangle." << endl;
//     }
// }

// int main() {
//     int side1, side2, side3;
//     cout << "Enter the lengths of the sides of the triangle: ";
//     cin >> side1 >> side2 >> side3;

//     checkTriangleType(side1, side2, side3);

//     return 0;
// }


/*
ques 6:
If the marks of A, B and C are input through the keyboard, write a program to determine the student
scoring the least marks.
Input 1: A = 23 , B = 34 , C = 71
Output : ‘A’ has the least marks.


*/

// #include<iostream>
// using namespace std;
// int main(){
//     int A,B, C;
//     cout<<"Enter A, B and C: "<<endl;
//     cin>>A>>B>>C;

//     if(A<B && A<C){
//         cout<<A<<" is a least marks."<<endl;
//     }
//     else if(B<C && B<<A){
//         cout<<B<<" is a least marks."<<endl;
//     }

//     else{
//         cout<<"C";
//     }


// }

/*
ques 7

Given a point (x, y), write a program to find out if it lies on the x-axis, y-axis or at the origin,
 viz. (0, 0).
Input 1: 2 0
Output 1: the point lies on the x - axis.
*/

// #include<iostream>
// using namespace std;
// int main(){
//     int x, y;
//     cout<<"Enter point of x and y coordinates: ";
//     cin>>x>>y;
    
//     if(x==0 && y==0){
//         cout<<"it is lies on the x-axis, y-axis or at the origin";
//     }
//     else if(x!=0 && y==0){
//         cout<<"it is on the x-axis only";
//     }
//     else if(x==0 && y!=0){
//         cout<<"it is on the y-axis only";
//     }

//     else{
//         cout<<"It is neither lies on x-axis and nor y-axis also";
//     }

// }

// #include<iostream>
// using namespace std;

// string pointLocation(int x, int y) {
//     if(x == 0 && y == 0) {
//         return "It lies on the x-axis, y-axis, or at the origin";
//     } else if(x != 0 && y == 0) {
//         return "It lies on the x-axis only";
//     } else if(x == 0 && y != 0) {
//         return "It lies on the y-axis only";
//     } else {
//         return "It neither lies on the x-axis nor y-axis";
//     }
// }

// int main() {
//     int x, y;
//     cout << "Enter the coordinates of a point (x y): ";
//     cin >> x >> y;

//     cout << pointLocation(x, y) << endl;

//     return 0;
// }


/*
ques 8:

Given three points (x1, y1), (x2, y2) and
(x3, y3), write a program to check if all the three points fall on one straight line.
Input 1: x1 = 1 , y1 = 2 , x2 = 2 , y2 = 3 , x3 = 3 , y3 = 4
Output 1: All 3 points lie on the same line.

*/

// #include<iostream>
// using namespace std;

// bool areCollinear(int x1, int y1, int x2, int y2, int x3, int y3) {
//     // Calculate slopes of two lines
//     int slope1 = (y2 - y1) * (x3 - x2);
//     int slope2 = (y3 - y2) * (x2 - x1);
    
//     // If the slopes are equal, points are collinear
//     return slope1 == slope2;
// }

// int main() {
//     int x1, y1, x2, y2, x3, y3;
//     cout << "Enter the coordinates of three points (x1 y1 x2 y2 x3 y3): ";
//     cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    
//     if (areCollinear(x1, y1, x2, y2, x3, y3)) {
//         cout << "All 3 points lie on the same line." << endl;
//     } else {
//         cout << "The points do not lie on the same line." << endl;
//     }

//     return 0;
// }


/*
ques 9:

Write a C++ program to input any character and check whether it is the alphabet, digit or special
character.
Input 1: ch = ‘9’
Output 1: digit

*/

// #include<iostream>
// using namespace std;
// int main(){
//     char ch;
//     cout<<"The user enter your char : ";
//     cin>>ch;

//     if((ch>= 'A' && ch<='Z') || (ch<='z' && ch>='Z')){
//         cout<<"Alphabet";
//     }
//     else if(ch>='0'  && ch<= '9'){
//         cout<<"Digit";
//     }else{
//         cout<<"Special character";
//     }
// }

// #include <iostream>
// using namespace std;

// void checkCharacterType(char ch) {
//     if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
//         cout << "Alphabet" << endl;
//     }
//     else if (ch >= '0' && ch <= '9') {
//         cout << "Digit" << endl;
//     }
//     else {
//         cout << "Special character" << endl;
//     }
// }

// int main() {
//     char ch;
//     cout << "Enter a character: ";
//     cin >> ch;
//     checkCharacterType(ch);
//     return 0;
// }



// ques 10 : predict the output of the code.


// #include<iostream>
// using namespace std;
// int main() {
// int a = 500, b, c;
// if (a >= 400)
// b = 300;
// c = 200;
// cout << "value of b and c are respectively " << b << " and " << c;
// return 0;
// }



