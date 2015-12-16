#include <iostream>
#include <vector>
#include "Entity\Book.h"
#include "Entity\BookRepository.h"
#include "BooksFixturies.h"
#include "InMemoryStorage.h"
using namespace Library;

string asset(unsigned long a, unsigned long b) {
	return (a == b ? " Passed \n" : " Failed \n");
}

void coutbooks(vector<Book> &Books) {
	for each (Book book in Books)
	{
		cout << book.getId() << " " << book.getAuthor() << " " << book.getName() << " " << book.getPublishYear() << " \n";
	}
}

int main() {
	InMemoryStorage storage;

	// tests
	storage.save(BooksFixturies::getFixturedBooks(10));
	cout << "TEST [STORAGE SAVE] :: " << asset(storage.getBooksFromSource().size(), 10) << "\n";
	coutbooks(storage.getBooksFromSource());
	cin.get();

	storage.remove(4);
	cout << "TEST [STORAGE REMOVE] :: " << asset(storage.getBooksFromSource().size(), 9) << "\n";
	coutbooks(storage.getBooksFromSource());
	cin.get();

	Book pacia = Book("Pacia na tropie", "Karol", 2015, "211-3144");
	cout << "TEST [STORAGE UPDATE] :: " << asset(storage.update(3, pacia), 1) << "\n";
	coutbooks(storage.getBooksFromSource());
	cin.get();


	cout << "TEST [STORAGE ADD] :: " << asset(storage.update(12, pacia), 0) << "\n";
	coutbooks(storage.getBooksFromSource());
	cin.get();



	storage.reset();
	cout << "TEST [STORAGE RESET] :: " << asset(storage.getBooksFromSource().size(), 0) << storage.getBooksFromSource().size() << "\n";
	cin.get();


	vector<Book> books = BooksFixturies::getFixturedBooks(20);
	storage.save(books);
	cout << "TEST [STORAGE SAVE] :: " << asset(storage.getBooksFromSource().size(), 20) << "\n";
	coutbooks(storage.getBooksFromSource());
	cin.get();
	return 0;

}
