# Homework 4

## 1. Describe briefly the role of the three different steps in the compilation process

Note: The text in *italics* is taken directly from lecture notes but the text beneath is how I think about it. 


**1. Transform the source code into assembly code.**

Translates a human-readable program/code into a lower-level language which is closer to the machine's hardware.

**2. Enrich the assembly code by *linking* it to assebly code or binary code offered by the OS and external libraries, to manage hardware (memory, access to devices,...) or functionalities provided by other programmers.**

Creates the connections, i.e. *links* to additional code / external libraries needed for the program to work correctly. 

**3. Produce an *exectutable binary file* in machine language**
Yields the final result which is an executable file with machine code (not human-readable).

## 2. In the the following code snippet, give the order that the objects are destroyed. Are there any objects that aren't destroyed?

```cpp
#include<iostream>
#include<string> 
void print_number(int number) { std::cout << number << std::endl; }

int main() {

  int i{0};
  { int j{1}; }

  print_number(i);
  auto number_on_heap { new int{3}};
  auto leaked_string{new std::string{"I'm being leaked!"}};
  delete number_on_heap;
}
```




## 3. Given a source file called homework.cxx. What command would you run to
### 1. Compile it into an object file called homework.o, with warnings enabled
### 2. Compile it and link it into an executable called homework, with warnings enabled


## 4. What type of function is declared here? When is it invoked? 
```cpp
class Circle {
  public:
    Circle(const Circle& other);
};
```

## 5. Explain RAII
