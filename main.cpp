#include <iostream>
#include "page.h"

int main() {
    std::string data;
    while (true) {
        std::cout << "Enter data: ";
        std::cin >> data;
        if (data == "exit") break;
        Page::getInstance()->insertDataIntoPage(data);
    }
    return 0;
}