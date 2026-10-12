# Homework 4

## 1. Describe briefly the role of the three different steps in the compilation process


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
