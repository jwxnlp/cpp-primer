#include <iostream>

/*
 * print all integer between given range specified by two integer
 *
 */
int main() {
    int x = 0, y = 0;
    std::cout << "Please enter two integer: "
              << std::endl;
    std::cin >> x >> y;
    // ensure that x is not greater than y
    if (x > y) {
        int tmp = y;
        y = x;
        x = tmp;
    }
    // print the integer between x and y
    int v = x;
    while (v <= y) {
        std::cout << v << " ";
        ++ v;
    }
    std::cout << std::endl;

    return 0;
}