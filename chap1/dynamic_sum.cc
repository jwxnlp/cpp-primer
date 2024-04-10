#include <iostream>

/*
 * return sum of given range
 *
 */
int main() {
    std::cout << "Please enter a series of numbers: " << std::endl;
    int s = 0, x = 0;
    while(std::cin >> x) {
        s += x;
    }
    std::cout << "\nThe sum is: " << s << std::endl;

    return 0;
}