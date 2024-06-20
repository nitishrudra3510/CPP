/*
In C++, when you pass arguments to a function, they can be passed by value, by reference, or by pointer, and each method behaves differently:

1. Pass by Value:
   - When you pass arguments by value, a copy of the value is made and passed to the function. Any changes made to the parameter inside the function do not affect the original value outside the function.
   - Example:
     ```cpp
     void foo(int x) {
         x = 10; // Changes made to x inside the function do not affect the original value passed to foo
     }
     int main() {
         int a = 5;
         foo(a);
         // a is still 5
         return 0;
     }
     ```

2. Pass by Reference:
   - When you pass arguments by reference, you're passing a reference to the original value. This means any changes made to the parameter inside the function will affect the original value outside the function.
   - Example:
     ```cpp
     void foo(int& x) {
         x = 10; // Changes made to x inside the function affect the original value passed to foo
     }
     int main() {
         int a = 5;
         foo(a);
         // a is now 10
         return 0;
     }
     ```

3. Pass by Pointer:
   - When you pass arguments by pointer, you're passing the memory address of the original value. This allows you to modify the original value through pointer manipulation.
   - Example:
     ```cpp
     void foo(int* x) {
         *x = 10; // Changes made to the value pointed to by x affect the original value passed to foo
     }
     int main() {
         int a = 5;
         foo(&a);
         // a is now 10
         return 0;
     }
     ```

So, while the values themselves might not be exactly the same due to copying or referencing, they represent the same value or memory location, depending on the method of passing used.
*/