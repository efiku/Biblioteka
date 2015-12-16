#pragma once
#include <vector>
#include "Entity\Book.h"
namespace Library {

	class StorageInterface
	{
	public:
		virtual ~StorageInterface();

		// Remove element from storage collection
		// @parameter unsigned long Book id. 
		// Id should be unique
		// @return bool Success or Fail.
		virtual bool remove(unsigned long bookId) = 0;

		// Save collection of books in storage
		// @parameter vector<Book> collection of books.
		// @return Succes or Fail 
		virtual bool save(vector<Book> &bookCollection) = 0;

		// Update book in collection. 
		// Basing on DDD changed book should have regenerated their ID
		// because if we change Title and author, book is not the same.
		// @parameter Book
		// @parameter BookID.
		// @return Success or fail when book not exists.
		virtual bool update(unsigned long bookId, Book &book) = 0;

		// Clear storage, save empty Collection
		// @return Success or Fail
		virtual bool reset() = 0;


		// Get books from storage
		// @return Empty Collection or Books Collection
		virtual vector<Book> getBooksFromSource() = 0;
	};

}


