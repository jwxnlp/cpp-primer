#include <iostream>

/*
 * return sum between given range
 *
 */
int main() {
    int s = 0, x = 1;
    while(x <= 10) {
        s += x;
        ++ x;
    }
    std::cout << "The sum between 1 and 10 is: " 
              << s << std::endl;

    return 0;
}