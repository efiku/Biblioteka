#include "BooksFixtures.h"

namespace Library {

    BooksFixtures::BooksFixtures() {

    }

    BooksFixtures::~BooksFixtures() {

    }

    vector<Book> BooksFixtures::getFixturedBooks(unsigned long numberOfBooks) {
        if (numberOfBooks <= 0) return vector<Book>();
        BooksFixtures self;
        srand(time(NULL));

        vector<string> names, authors, isbns;
        names = self.makeNames();
        authors = self.makeAuthors();
        isbns = self.makeISBNS();

        vector<Book> preparedBooks;
        for (unsigned int index = 0; index < numberOfBooks; index++) {
            preparedBooks.push_back(
                    Book(
                            names[rand() % names.size()],
                            authors[rand() % authors.size()],
                            1990 + index,
                            isbns[rand() % isbns.size()]
                    )
            );
        }
        return preparedBooks;
    }

    vector<string> BooksFixtures::makeAuthors() {
        return vector<string>() = {
                "Lena",
                "Zofia",
                "Zuzanna",
                "Hanna",
                "Julia",
                "Aleksandra",
                "Maja",
                "Amelia",
                "Jakub",
                "Jan",
                "Kacper",
                "Szymon",
                "Antoni",
                "Franciszek",
                "Filip"
        };
    }


    vector<string>  BooksFixtures::makeNames() {
        return vector<string>() = {
                "Srda śpiewa o zmierzchu w Zielone Świątki",
                "Nie ma orchidei dla panny Blandish",
                "Śmierć pięknych saren",
                "Ballada o wzgardliwym wisielcu",
                "Pejzaż Gnojnej Góry",
                "Lekcje tańca dla starszych i zaawansowanych",
                "Lot nad kukułczym gniazdem",
                "Pod osłoną nieba",
                "Stracone zachody miłości",
                "Nasz człowiek w Hawanie"
        };
    }


    vector<string> BooksFixtures::makeISBNS() {
        vector<string> isbns;
        for (int i = 0; i < 10; i++) {
            isbns.push_back(
                    to_string(i + 1) +
                    to_string(i) +
                    "-" +
                    to_string(i) +
                    to_string(i + 1) +
                    to_string(i)
            );
        }

        return isbns;
    }

}
