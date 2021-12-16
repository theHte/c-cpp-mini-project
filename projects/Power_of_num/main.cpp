#include <iostream>

int main()
{

    float base; // Base number
    int exp; // Exponent number

    float result = 1; // Result for default 1

    std::cout << "Enter base and exponent Example 4 2: "; // asks me to enter the base number and the exponent

    std::cin >> base >> exp;

    std::cout << base << "^" << exp << " = ";

    while (exp != 0) {
        result *= base;

        --exp;
    }

    std::cout << result;

    return 0;
}
