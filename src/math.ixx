// math.ixx - is a BINARY INTERFACE. this is NOT needed anymore in the latest compilers, just move all these export
// calls inside the `math.cpp`
export module math; // This DECLARES a module named "math"

export int add(int a, int b);
export int multiply(int a, int b);