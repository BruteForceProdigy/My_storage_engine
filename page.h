//
// Created by Shantanu on 18-05-2026.
//
#pragma once
#include <string>
#include <vector>


class Page {
public:
    void insertDataIntoPage(std::string data);

    int calculateBytes(std::string data);

    bool canFit(std::string data);

    static Page *getInstance();

private:
    static int free_space;
    static Page *instance;
    std::vector<std::string> records;
    int page_id;

    Page(int id);
};
