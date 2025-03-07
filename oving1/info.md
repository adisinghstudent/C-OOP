Always open a the folder you want to create a project in vscode. 
Cmd+R to Run Build and debug C++
Cmd+Shift+V to preview .md files (this file)

# C++ Overview and Components

## 1. Basics of C++ Code Structure

### a. Preprocessor Directives
```cpp
#include <iostream>  // Includes the input/output library
#define PI 3.14      // Defines a constant

using namespace std;  // Allows using names from the `std` namespace directly

int main() {
    return 0;  // Signals successful execution
}

int age = 20;        // Integer
double height = 1.8; // Floating-point number
char grade = 'A';    // Character

cout << "Hello, World!";  // Output
cin >> age;               // Input

int add(int a, int b) { // Functions
    return a + b;
}

if (age > 18) {  // If else
    cout << "Adult";
} else {
    cout << "Minor";
}

for (int i = 0; i < 5; i++) {  // Loops
    cout << i << " ";
}

int numbers[3] = {1, 2, 3}; // Arrays

int x = 5;      // Variable
int* ptr = &x;  // Pointer to the memory address of `x`
cout << *ptr;   // Dereferencing the pointer

class Person {  // Class
public:
    string name;
    int age;

    void display() {
        cout << "Name: " << name << ", Age: " << age;
    }
};