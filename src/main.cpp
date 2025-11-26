import <iostream>;
import <print>;
import math;
import foo;

int main() {
    int x = 5;
    int y = 3;

    std::println("Adding: {} + {} = {}", x, y, add(x, y));
    std::println("Multiplying: {} * {} = {}", x, y, multiply(x, y));

    foo f;
    f.helloworld();

    return 0;
}