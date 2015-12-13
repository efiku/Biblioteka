#pragma once
#include <string>

namespace Library {
	using namespace std;

	class Book
	{
	public:
		Book();
		Book(string bookName, string bookAuthor, unsigned int bookPublishYear, string bookISBN);
		~Book();

		unsigned long getId();
		string getName();
	private:
		unsigned int bookPublishYear;
		string bookName;
		string bookAuthor;
		string bookIsbn;
		unsigned long bookId;
	protected:
		static unsigned long storedId;
	};
}
