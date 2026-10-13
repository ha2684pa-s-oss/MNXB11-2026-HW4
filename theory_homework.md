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

The variable `j` is destroyed more or less directly since it is created inside an inner block. It doesn't exist outside that block.

Next, `number_on_heap` is deleted. Since the command is `delete number_on_heap`, the integer value 3 is deleted/destroyed but I am pretty sure the pointer is still active until the end of `main()`?

Here, I got a bit stuck despite having looked back at the lecture notes and cpp references. So I asked ChatGPT to walk me through this last part, making sure I understood it. Because intuitively I'd suppose the rest of the objects are destroyed at the end of `main()` but I wasn't sure in what order or how to tell if objects aren't destroyed. 

From my understanding (with help of ChatGPT), the remaining local variables are destroyed in reverse order of construction. So `leaked_string` first (the pointer variable, not dynamically allocated string), then the `number_on_heap` pointer variable and lastly the integer variable `i`. 

I'd suppose that means that the dynamically allocated string "part" of `leaked_string` is never explicitly being destroyed. Since there is no `delete leaked_string` in the code. 


## 3. Given a source file called homework.cxx. What command would you run to
### 1. Compile it into an object file called homework.o, with warnings enabled

```bash
g++ main.cxx -c -Wall -Wextra -Werror
```

The `-c` flag ensures compilation but without linking. 


### 2. Compile it and link it into an executable called homework, with warnings enabled
```bash
g++ main.cxx -o homework -Wall -Wextra -Werror
```



## 4. What type of function is declared here? When is it invoked? 
```cpp
class Circle {
  public:
    Circle(const Circle& other);
};
```
It is a copy constructor and it is invoked when a new `Circle` object is initialized from an already existing `Circle` object. Example:

```c++
Circle circle1(); // creating the first object
Circle circle2(circle1);  // invoking copy constructor
```
## 5. Explain RAII
