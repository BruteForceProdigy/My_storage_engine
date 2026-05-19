//
// Created by Shantanu on 18-05-2026.
//

#include "page.h"

#include <iostream>
int Page::free_space = 20;

Page *Page::instance = nullptr;

Page::Page(int id) {
    page_id = id;
}

void Page::insertDataIntoPage(std::string data) {
    Page *current = Page::getInstance();
    if (current->canFit(data)) {
        free_space -= calculateBytes(data);
        std::cout << " free_space remaing" << free_space << std::endl;
        current->records.push_back(data);
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
    if (!instance) {
        instance = new Page(1);
    }
    return instance;
}
