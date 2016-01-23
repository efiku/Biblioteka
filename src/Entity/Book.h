#pragma once

#include <string>

namespace Library {
    using namespace std;

    class Book {
    public:
        Book();

        Book(string bookName, string bookAuthor, unsigned int bookPublishYear, string bookISBN);

        ~Book();

        unsigned long getId();

        string getName();

        string getAuthor();

        string getISBN();

        void setBookIsbn(const string &bookIsbn) {
            Book::bookIsbn = bookIsbn;
        }

        void setBookPublishYear(unsigned int bookPublishYear) {
            Book::bookPublishYear = bookPublishYear;
        }

        void setBookName(const string &bookName) {
            Book::bookName = bookName;
        }

        void setBookAuthor(const string &bookAuthor) {
            Book::bookAuthor = bookAuthor;
        }

        unsigned int getPublishYear();

    private:
        unsigned int bookPublishYear;
        string bookName;
        string bookAuthor;
        string bookIsbn;
        unsigned long bookId;
    protected:
        static unsigned long storedId;
    };
}
