#include <iostream>
#include <vector>
#include "Entity\Book.h"
#include "Entity\BookRepository.h"
#include "BooksFixturies.h"

using namespace Library;
int main() {
	vector<Book> booksCollection = BooksFixturies::getFixturedBooks(15);
	BookRepository bookRepository = BookRepository(booksCollection);



	for each (Book book in bookRepository.getAllBooks())
	{
		cout << book.getId() << "  " << book.getName() << " " << book.getAuthor()  << " " << book.getPublishYear() << " " << book.getISBN() <<  "\n";
	}
    
	cin.get();
	return 0;
}