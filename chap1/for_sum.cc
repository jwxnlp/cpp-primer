#include <iostream>

/*
 * return sum between given range
 *
 */
int main() {
    int s = 0;
    for(int v=0; v <= 10; ++v) {
        s += v;
    }
    std::cout << "The sum between 1 and 10 is: " 
              << s << std::endl;

    return 0;
}