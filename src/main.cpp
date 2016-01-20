#include <iostream>
#include "Entity/Book.h"
#include "Application/Application.h"
#include "Application/Command.h"
#include "Fixtures/BooksFixtures.h"

using namespace Library;

void createFixtures(Database &);


int main() {
    Application application;
    Command command;
    Database database;
    createFixtures(database);

    application.run();
    command.handle(database);

    while (application.isIsRun()) {
        system("clear");
        cout <<
        "Menu:\n"
                "1. Wyświetl książki:\n"
                "2. Dodaj książkę.\n"
                "2. Edytuj ksiażkę.\n"
                "3. Usuń książkę.\n"
                "4. Wyjdź \n"
                "Wybór: ";

        int option;
        cin >> option;
        system("clear");
        switch (option) {

            case 1:
                command.showBooks();
                std::cin.get();
                break;
            case 4:
                application.stop();
                break;
            default:
                system("clear");
                break;
        }


    }
}

void createFixtures(Database &db) {
    db.save(BooksFixtures::getFixturedBooks(10));
}
