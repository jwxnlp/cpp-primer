#include <iostream>

/*
 * print all number between given range
 *
 */
int main() {
    int s = 0, x = 10;
    std::cout << "Print number which is between 0 and 10 in decrease: "
              << std::endl;
    while(x >= 0) {
        std::cout << x << " ";
        -- x;
    }
    std::cout << std::endl;

    return 0;
}