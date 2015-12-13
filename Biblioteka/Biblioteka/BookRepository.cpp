#include "BookRepository.h"

namespace Library {
	BookRepository::BookRepository(vector<Book> bookCollection)
	{
		BookRepository::bookCollection = bookCollection;
	}


	BookRepository::~BookRepository()
	{
	}

	vector<Book> BookRepository::getAllBooks()
	{
		return bookCollection;
	}

	vector<Book> BookRepository::findBy(string author)
	{
		vector<Book> tempBooks;
		for each (Book book in bookCollection) {
			if (book.getAuthor() == author) {
				tempBooks.push_back(book);
			}
		}

		return tempBooks;
	}

}





