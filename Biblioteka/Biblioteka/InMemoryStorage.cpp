#include "InMemoryStorage.h"

namespace Library {
	InMemoryStorage::InMemoryStorage()
	{
	}

	InMemoryStorage::~InMemoryStorage()
	{
		books.clear();
	}

	bool InMemoryStorage::remove(unsigned long bookId)
	{
		bool isBookRemoved = false;
		vector<Book>::iterator bookIterator;

		for (bookIterator = books.begin(); bookIterator != books.end();) {
			unsigned long currentBookId = (*bookIterator).getId();
			if (currentBookId == bookId) {
				bookIterator = books.erase(bookIterator);
				isBookRemoved = true;
			}
			else
			{
			  bookIterator++;
			}
		}
		return isBookRemoved;
	}

	bool InMemoryStorage::save(vector<Book> &bookCollection)
	{
		InMemoryStorage::books = bookCollection;
		return (books.size() > 0 ? true : false);
	}

	bool InMemoryStorage::update(unsigned long bookId, Book &book)
	{
		bool isFound = false;
		for (vector<Book>::iterator bookIterator = books.begin(); bookIterator != books.end(); ++bookIterator)
		{
			Book & bookFromStorage = *bookIterator;
			if (bookFromStorage.getId() == bookId) {
				bookFromStorage = book;
				isFound = true;
				return isFound;
			}
		}
		if (!isFound) {
			Book copyBook = Book(book.getName(), book.getAuthor(), book.getPublishYear(), book.getISBN());
			books.push_back(copyBook);
		}
		return isFound;
	}

	bool InMemoryStorage::reset()
	{
		books = vector<Book>();
		return true;
	}

	vector<Book>InMemoryStorage::getBooksFromSource()
	{
		return books;
	}
}