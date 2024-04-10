#include <iostream>

/*
 * return sum between two numbers
 *
 */
int main() {
    // prompt user to input two numbers
    std::cout << "please enter two number for sum: ";
    int x=0, y=0;
    std::cin >> x >> y;
    std::cout << "The sum is: " << x + y << std::endl;
    // std::cout << /* "*/" /* "/*" */; // for exercise 1.8
    return 0;
}