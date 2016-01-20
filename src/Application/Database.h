//
// Created by efik on 20.01.16.
//

#ifndef BIBLIOTEKA_DATABASE_H
#define BIBLIOTEKA_DATABASE_H

#include <vector>
#include "../Entity/Book.h"

using namespace Library;

class Database {

private:
    vector<Book> booksCollection;

public:
    bool save(vector<Book> books) {
        booksCollection = books;
        return true;
    }

    vector<Book> read() {
        return booksCollection;
    }
};


#endif //BIBLIOTEKA_DATABASE_H
