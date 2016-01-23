//
// Created by efik on 20.01.16.
//

#ifndef BIBLIOTEKA_COMMAND_H
#define BIBLIOTEKA_COMMAND_H


#include <iostream>
#include <limits>
#include <sstream>
#include "Database.h"

class Command {
private:
    Database db;

    void printCollection(vector <Book> &collection) {
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
        vector <Book> books = db.read();
        printCollection(books);
        std::cin.clear();
    }

    void addBook() {
        string bookName, bookAuthor, bookISBN;
        unsigned int publishDate;
        cout << "Podaj Nazwę książki: ";
        std::cin >> bookName;
        cout << "\nPodaj autora książki: ";
        std::cin >> bookAuthor;
        cout << "\nPodaj numer ISBN: ";
        std::cin >> bookISBN;
        cout << "\nPodaj date publikacji: ";
        std::cin >> publishDate;

        Book book = Book(bookName, bookAuthor, publishDate, bookISBN);
        vector <Book> books = db.read();
        books.push_back(book);
        db.save(books);
        cin.clear();
    }


    void removeBook() {
        unsigned long bookId;
        cout << "Podaj id książki: ";
        cin >> bookId;
        cin.clear();


        vector<Book>::iterator bookIterator;
        vector <Book> books = db.read();

        for (bookIterator = books.begin(); bookIterator != books.end();) {
            unsigned long currentBookId = (*bookIterator).getId();
            if (currentBookId == bookId) {
                bookIterator = books.erase(bookIterator);

            }
            else {
                bookIterator++;
            }
        }
        db.save(books);
    }

    void editBook() {
        unsigned long bookId;
        cout << "Podaj id książki: ";
        cin >> bookId;
        cin.clear();

        vector<Book>::iterator bookIterator;
        vector <Book> books = db.read();

        for (bookIterator = books.begin(); bookIterator != books.end();) {
            unsigned long currentBookId = (*bookIterator).getId();
            if (currentBookId == bookId) {
                cout <<
                "\n Co chcesz edytować?"
                        "\n1. Nazwę książki "
                        "\n2. Nazwę autora "
                        "\n3. Nazwę kod ISBN "
                        "\n4. Nazwę Date publikacji "
                        "\n Wybierz opcje:";
                unsigned int opcja;
                cin >> opcja;
                cin.clear();
                string tekst;
                cout << "\nPopraw: ";
                switch (opcja) {
                    case 1 :
                        cin >> tekst;
                        (*bookIterator).setBookName(tekst);
                        break;
                    case 2:
                        cin >> tekst;
                        (*bookIterator).setBookAuthor(tekst);
                        break;
                    case 3:
                        cin >> tekst;
                        (*bookIterator).setBookIsbn(tekst);
                        break;
                    case 4:
                        unsigned int pYear;
                        cin >> pYear;
                        (*bookIterator).setBookPublishYear(pYear);
                        break;
                    default:
                        break;
                }
                break;

            }
            else {
                bookIterator++;
            }
        }
        db.save(books);
        return;
    }
};


#endif //BIBLIOTEKA_COMMAND_H
