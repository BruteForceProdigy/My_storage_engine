//
// Created by Shantanu on 18-05-2026.
//
#pragma once
#include <string>


class Page {
public:
    void insertDataIntoPage(std::string data);

    int calculateBytes(std::string data);

    bool canFit(std::string data);

    static Page *getInstance();

private:
    static int free_space;
    static Page *instance;

    Page(int id, std::string data);
};
