#include "Book.h"

namespace Library {
    unsigned long Book::storedId = 0;

// Get book ID
    unsigned long Book::getId() {
        return bookId;
    }

// Get book name
    string Book::getName() {
        return bookName;
    }

    string Book::getAuthor() {
        return bookAuthor;
    }

    string Book::getISBN() {
        return bookIsbn;
    }

    unsigned int Book::getPublishYear() {
        return bookPublishYear;
    }

/*
 Book Entity
 @param Book Title string
 @param Book Author string
 @param Book Publish Year unsigned int
 @param Book Book ISBN code. string
*/
    Book::Book(string bookName, string bookAuthor, unsigned int bookPublishYear, string bookISBN) {
        Book::bookName = bookName;
        Book::bookAuthor = bookAuthor;
        Book::bookPublishYear = bookPublishYear;
        Book::bookIsbn = bookISBN;
        Book::storedId++;
        Book::bookId = storedId;
    }

    Book::~Book() {
    }

    Book::Book() {

    }

}
