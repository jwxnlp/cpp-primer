#include <iostream>
#include "Sales_item.h"

int main() {
    std::cout << "Please enter a series of sales items: " << std::endl;
    Sales_item total, item;
    int count = 0;
    if (std::cin >> total) {
        Sales_item item;
        while(std::cin >> item) {
            if (item.isbn() != total.isbn()) {
                std::cout << total << std::endl;
                total = item;
            } else {
                total += item;
            }
        }
        std::cout << total << std::endl;
    } else {
        std::cerr << "Please at least enter one sales item!!!" << std::endl;
        return -1;
    }
    
    return 0;
}