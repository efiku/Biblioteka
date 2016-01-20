//
// Created by efik on 20.01.16.
//

#ifndef BIBLIOTEKA_COMMAND_H
#define BIBLIOTEKA_COMMAND_H


#include <iostream>
#include "Database.h"

class Command {
private:
    Database db;

    void printCollection(vector<Book> &collection) {
        std::cout << " id. |  Book Name | Book Author | Book ISBN | Book Publish year | \n\n";
        for (Book book : collection) {
            std::cout
            << book.getId()
            << " | "
            << book.getName()
            << " | "
            << book.getAuthor()
            << " | "
            << book.getISBN()
            << " |"
            << book.getPublishYear()
            << "\n";
        }
    }

public:
    void handle(Database &database) {
        db = database;
    }

    void showBooks() {
        vector<Book> books = db.read();
        printCollection(books);
        std::cin.clear();
        std::cin.get();
    }

    void
};


#endif //BIBLIOTEKA_COMMAND_H
