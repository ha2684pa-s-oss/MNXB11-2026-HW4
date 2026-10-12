#include "as3.hpp"

namespace homework {


Fruit::Fruit(Color color, const std::string& name) : color_(color), name_(name) {}


// color getter
Color Fruit::getColor() const {
    return color_;
}

// name getter
std::string Fruit::getName() const {
    return name_;
}


} // namespace homework

