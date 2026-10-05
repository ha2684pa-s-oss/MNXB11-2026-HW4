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

  // Example for as2.1
  homework::Foo foo{};
  std::cout << foo.bar() << std::endl;
  
}

