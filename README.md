# C++ Modules Project

A demonstration of C++23 module implementation using CMake as the build system.

## Project Structure

```
src/
├── foo.cxx          # Primary module interface for foo module
├── main.cpp         # Main application importing modules
├── math.ixx         # Primary module interface for math module
└── math.cpp         # Module implementation for math module
```

## Module Implementation

### Math Module
- **math.ixx**: Primary module interface declaring exported functions
- **math.cpp**: Module implementation containing function definitions

The math module exports two mathematical operations:
- `add(int a, int b)`
- `multiply(int a, int b)`

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

- Modern C++23 module syntax
- Separation of module interfaces and implementations
- CMake integration for module-aware builds
- Standard library module usage

This project serves as a reference implementation for C++23 module development with proper build system configuration.