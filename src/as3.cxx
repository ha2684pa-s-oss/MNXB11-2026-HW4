#include "as3.hpp"

namespace homework {


Fruit::Fruit(const std::string& name, Color color) 
    : name_(name), color_(color) {

}


// color getter
Color Fruit::getColor() const {
    return color_;
}

// name getter
std::string Fruit::getName() const {
    return name_;
}

std::string Fruit::getTaste() const {
    return "unknown";
}

Apple::Apple(Color color)
    : Fruit("apple", color) {}


std::string Apple::getTaste() const {
    return "sweet";

}
} // namespace homework

