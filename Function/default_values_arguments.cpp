/*
### Default Values of Function Arguments in C++

In C++, you can assign default values to function parameters, enabling you to call functions without explicitly providing arguments for parameters with default values. Here's a breakdown of how default arguments work:

1. **Syntax**:
   ```cpp
   void functionName(type parameterName = defaultValue) {
       // Function body
   }
   ```

2. **Usage**:
   - When calling the function, you can omit arguments corresponding to parameters with default values.
   - If you omit arguments with defaults, the function uses the default values specified in the declaration.

3. **Example**:
   ```cpp
   void printValues(int a = 5, int b = 10) {
       std::cout << "a: " << a << ", b: " << b << std::endl;
   }
   ```

4. **Calling the Function**:
   ```cpp
   printValues();         // Output: a: 5, b: 10
   printValues(15);       // Output: a: 15, b: 10
   printValues(20, 25);   // Output: a: 20, b: 25
   ```

5. **Rules**:
   - Default values are specified in the function declaration only, not in the definition.
   - Default arguments must be specified from right to left in the parameter list.
   - All parameters with default values must come after parameters without defaults.

6. **Benefits**:
   - Provides flexibility in function calls, allowing users to provide only necessary arguments.
   - Useful for functions with many parameters, reducing the need for overloaded functions.

Default arguments are a powerful feature in C++, enhancing code readability and flexibility by simplifying function calls while maintaining compatibility with existing codebases.

*/