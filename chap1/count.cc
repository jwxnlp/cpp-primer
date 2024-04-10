#include <iostream>

/*
 * count frequency of values in continuously occur
 *
 */
int main() {
    std::cout << "Please enter a series of numbers: " << std::endl;
    int v = 0, cur_v = 0, count = 0;
    if (std::cin >> cur_v) {
        ++count;
        while(std::cin >> v) {
            if (v != cur_v) {
                std::cout << cur_v << " continuously occur " 
                          << count << " times!" << std::endl;
                cur_v = v;
                count = 1;
            } else {
                ++count;
            }
        }
        std::cout << cur_v << " continuously occur " 
                  << count << " times!" << std::endl;
    } else {
        std::cerr << "Please at least enter one number!" << std::endl;
    }
    
    return 0;
}