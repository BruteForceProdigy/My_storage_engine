//
// Created by Shantanu on 18-05-2026.
//

#include "page.h"

#include <iostream>
int Page::free_space = 4096;

Page *Page::instance = nullptr;

void Page::insertDataIntoPage(std::string data) {
    if (canFit(data)) {
        free_space -= calculateBytes(data);
        p1 = getInstance();
    } else {
        std::cout << " write data to disk";
    }
}

int Page::calculateBytes(std::string data) {
    return data.size();
}


bool Page::canFit(std::string data) {
    return calculateBytes(data) < free_space;
}

Page *
Page::getInstance() {
    if (!p1) {
        p1 = new Page(1, );
    }
}
