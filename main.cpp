#include <print>

int foo(int n) {
    return n++ * 100;
}

int main() {
    std::println("hewwo from git :3");

    std::println("some new change!!! heres a foo(10): {}", foo(10));
}
