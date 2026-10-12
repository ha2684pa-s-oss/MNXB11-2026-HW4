#include "as2.hpp"

namespace homework {

// implement Foo methods here
int Foo::bar() { 
  return 42; 
}


float Foo::baz() {
  x = 2.71;
  return 3.14;
}


std::vector<double> Foo::quux() {
  return {1.0, 2.0, 3.0};
} 



fVector2D::fVector2D(float x, float y) : x_(x), y_(y) {}

fVector2D operator+(const fVector2D& v1, const fVector2D& v2) {
  return fVector2D(v1.x_ + v2.x_, v1.y_ + v2.y_);
}


} // namespace homework
