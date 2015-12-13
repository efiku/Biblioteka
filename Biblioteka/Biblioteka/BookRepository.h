#pragma once
#include <vector>
#include "Book.h"
namespace Library {
	using namespace std;

	class BookRepository
	{
	public:
		BookRepository(vector<Book> bookCollection);
		~BookRepository();
	private:
		BookRepository();
		vector<Book> bookCollection;
	public:
		vector<Book> getAllBooks();
		vector<Book> findBy(string author);
	};


}

