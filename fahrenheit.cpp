#include <iostream>

int main() {
    std::cout << "Fahrenheit: ";
    int fahrenheit;
    std::cin >> fahrenheit;
    double celsius = (fahrenheit - 32) * 5 / 9;
    std::cout << "\nCelsius ist " << celsius << ".\n";
    return 0;
}