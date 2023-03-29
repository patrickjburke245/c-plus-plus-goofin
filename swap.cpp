#include <iostream>

int main() {
    int a = 1;
    int b = 2;
    int temp;
    std::cout << "Original a is " << a << ".\n";
    std::cout << "Original b is " << b << ".\n";

    temp = a;
    a = b;
    b = temp;

    std::cout << "New a is " << a << ".\n";
    std::cout << "New b is " << b << ".\n";  
    return 0;
}