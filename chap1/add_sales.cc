#include <iostream>
#include "Sales_item.h"

int main() {
    Sales_item item1, item2;
    std::cout << "Please input two sales items: " << std::endl;
    // read isbn
    std::cin >> item1 >> item2; // 重载运算符
    if (item1.isbn() == item2.isbn()) {
        std::cout << "The sum is: " << item1 + item2 << std::endl;
    } else {
        std::cout << "The two book are Different, can not sum: \n"
                  << "The ISBN of The First Book is: " << item1.isbn() << "\n"
                  << "The ISBN of The Second Book is: " << item2.isbn() << std::endl;
    }
    
    return 0;
}