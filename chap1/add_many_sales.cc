#include <iostream>
#include "Sales_item.h"

int main() {
    Sales_item item1, item2;
    std::cout << "Please input a series of same items: " << std::endl;
    Sales_item items;
    if (std::cin >> items) {
        Sales_item item; // define when used
        while (std::cin >> item) {
            if (item.isbn() == items.isbn()) {
                items += item;
            } else {
                std::cout << "The coming book " << item.isbn() << " is different, can not sum!" << std::endl;
                break;
            }
        }
        std::cout << "The total sum of book " << items.isbn() << " is: " << items << std::endl;
    } else {
        std::cerr << "No Input Items!!!" << std::endl;
    }
    
    return 0;
}