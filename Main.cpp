/**
 * @file MyCode.cpp
 * @brief Simple example to demonstrate Doxygen usage
 */

/**
 * @brief Adds two integers
 * 
 * @param a First integer
 * @param b Second integer
 * @return Sum of a and b
 */
int add(int a, int b) {
    return a + b;
}

#include <iostream>

/**
 * @brief Main function
 * 
 * @return int Program exit status
 */
int main() {
    int x = 3, y = 5;
    std::cout << "Sum: " << add(x, y) << std::endl;
    return 0;
}
