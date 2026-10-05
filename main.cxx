/** Use this main to test exercises. See the example with 'as1.0' below. 
 *  You can add all the exercise tests inside the same main.
 *  Don't forget to add includes properly.
 * */

#include "as1.hpp"
#include "as2.hpp"
#include <iostream>

int main() { 
  // Example for as1.0
  homework::printHello();


  // example for as1.4

  int number = homework::factorial(3);
  std::cout << number << std::endl;


  // Example for as2.1
  homework::Foo foo{};
  std::cout << foo.bar() << std::endl;
  


  // Example for as2.1
  std::cout << foo.baz() << std::endl;
  std::cout << foo.x << std::endl;



}


