# C++ Modules Project

A demonstration of C++ module implementation using CMake as the build system.

## Project Structure

```
src/
├── foo.cxx          # Primary module interface for foo module
├── main.cpp         # Main application importing modules
├── math.ixx         # Primary module interface for math module
└── math.cpp         # Module implementation for math module
```

A Better practice would be structuring like such:
```
src/
├── foo.cpp          # Primary module interface for foo module
├── main.cpp         # Main application importing modules
└── math.cpp         # Primary Module implementation for math module
```

## Module Implementation

### Math Module
- **math.ixx**: Primary module interface declaring exported functions
- **math.cpp**: Module implementation containing function definitions

The math module exports two mathematical operations:
- `add(int a, int b)`
- `multiply(int a, int b)`

### What is `.ixx`?

`.ixx` is **Microsoft's convention** for module interface files. It's similar to `.hpp` in concept but with important differences:

- **`.hpp` (header)**: Textual inclusion (`#include`) - copy-paste code
- **`.ixx` (module interface)**: Binary module interface - compiled representation

Other compilers might use different extensions (GCC often uses `.cppm`).

Latest consensus: JUST USE .cpp on all your module files. All compilers are good enough to process them (don't need to use special .ixx files or alike. it will just seem confusing)

### Foo Module
- **foo.cxx**: Combined module interface and implementation
- Uses global module fragment for `#include <iostream>`
- Exports a `foo` class with constructor, destructor, and `helloworld()` method

### Main Application
- Imports standard library modules (`<iostream>`, `<print>`)
- Imports custom modules (`math`, `foo`)
- Demonstrates usage of exported module functionality

## Build System

The project uses CMake with C++23 standard support:
- Module files are specified using `FILE_SET CXX_MODULES FILES`
- Explicit module dependency management
- Standard library module imports

## Key Features

- Modern C++ module syntax
- Separation of module interfaces and implementations
- CMake integration for module-aware builds
- Standard library module usage

This project serves as a reference implementation for C++ module development with proper build system configuration.