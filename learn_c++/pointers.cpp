#include <iostream>
#include <string>

// References
// & is used to declare a reference. A reference is an alias to another variable.
/// Changing the reference will also change the original variable.
// References must be initialized when they are declared.
#include <iostream>
#include <string>

int references()
{
  int exam_grade = 85;
  int& score = exam_grade;

  // changing score will also change exam_grade
  score += 7;
  std::cout << exam_grade << std::endl;
  std::cout << score << std::endl;
  
  // print the memory address of message
  std::string message = "Hello World!";
  std::cout << message << std::endl;
  std::cout << &message << std::endl;
  
  return 0;
}

// Pointers

int pointers() {
  std::string name = "John";
  std::string* ptr = nullptr;
  
  ptr = &name;
  
  std::cout << ptr << '\n';
  std::cout << *ptr << '\n';
  
  *ptr = "Robin";
  
  std::cout << *ptr << '\n';
  std::cout << name << '\n';
  
  return 0;
}
 