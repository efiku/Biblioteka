#pragma once
#include <vector>
#include "Entity\Book.h"
namespace Library {
	using namespace std;
	class BooksFixturies
	{
	public:
		static vector<Book> getFixturedBooks(unsigned long numberOfBooks);
		BooksFixturies();
		~BooksFixturies();
	private:
		vector<string>  makeAuthors();
		vector<string>  makeNames();
		vector<string>  makeISBNS();
	};

}