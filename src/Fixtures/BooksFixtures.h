#pragma once

#include <vector>
#include "../Entity/Book.h"

namespace Library {
    using namespace std;

    class BooksFixtures {
    public:
        static vector<Book> getFixturedBooks(unsigned long numberOfBooks);

        BooksFixtures();

        ~BooksFixtures();

    private:
        vector<string> makeAuthors();

        vector<string> makeNames();

        vector<string> makeISBNS();
    };

}
