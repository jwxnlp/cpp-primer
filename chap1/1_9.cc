#include <iostream>

/*
 * return sum between given range
 *
 */
int main() {
    int s = 0, x = 50;
    while(x <= 100) {
        s += x;
        ++ x;
    }
    std::cout << "The sum between 50 and 100 is: " 
              << s << std::endl;

    return 0;
}