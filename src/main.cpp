#include <iostream> // all includes are REQUIRED to be ABOVE all import (and under global module if defined)

import <print>;
import std; // or just calling `import std;` would already include iostream and print

import math; // This says "I want to use the math module"
import foo;

int main() {
    int x = 5;
    int y = 3;

    std::cout << "------------ Main Begin ------------" << std::endl;
    std::println("Adding: {} + {} = {}", x, y, add(x, y));
    std::println("Multiplying: {} * {} = {}", x, y, multiply(x, y));

    foo f;
    f.helloworld();

    std::cout << "------------  Main End ------------" << std::endl;
    return 0;
}