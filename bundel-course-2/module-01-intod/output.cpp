#include <iostream>
// iostream stands for standard input-output stream
// . In other words, the iostream library is an object-oriented library that provides input and output functionality using streams. A stream is a sequence of bytes.

int main() {
    std::cout << "Hello World" << std::endl;
    int a = 10;
    long long int b = 1000000000000;
    float c = 1.5;
    double d = 1.50990999090;
    char cc = 'A';
    
    std::cout << a << std::endl;
    std::cout << "My favorite number is " << a;
    std::cout << a << "\n" << b << "\n";
    return 0;
}