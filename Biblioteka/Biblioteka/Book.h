#pragma once
#include <string>

namespace Library {
	using namespace std;
	class Book
	{
	public:
		Book();
		~Book();
	private:
		unsigned long id;
		string bookName;

		string bookAuthor;
		string bookIsbn;
	public:
		// Get Book id
		string getId();
	};
}
