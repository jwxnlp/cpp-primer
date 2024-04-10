#include <iostream>
#include "Sales_item.h"

int main() {
    std::cout << "Please enter a series of sales items: " << std::endl;
    Sales_item item, cur_item;
    int count = 0;
    if (std::cin >> cur_item) {
        ++count;
        while(std::cin >> item) {
            if (item.isbn() != cur_item.isbn()) {
                std::cout << cur_item.isbn() << " continuously occur " 
                          << count << " times!" << std::endl;
                cur_item = item;
                count = 1;
            } else {
                ++count;
            }
        }
        std::cout << cur_item.isbn() << " continuously occur " 
                  << count << " times!" << std::endl;
    } else {
        std::cerr << "Please at least enter one sales item!!!" << std::endl;
        return -1;
    }
    
    return 0;
}