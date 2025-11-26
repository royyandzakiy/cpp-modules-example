module; // Global module fragment whereas inbetween this and the export module, #include can be called

#include <iostream> // all includes added here... it will NOT be exported outwards with the module. it will stay to be used ONLY inside this module
// anymore #include ...

export module foo; // first thing after the Global module fragment must be a module command

export class foo {
  public:
    foo();
    ~foo();
    void helloworld();
};

foo::foo() = default;

foo::~foo() = default;

void foo::helloworld() {
    std::cout << "hello world\n";
}