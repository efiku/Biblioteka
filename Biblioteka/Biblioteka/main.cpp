#include <iostream>
#include <vector>
#include "Book.h"
#include "BookRepository.h"

using namespace Library;
int main() {
	 
	vector<Book> booksCollection; 
	vector<string> teksts = { "ala ", "ma", "kota", "a" , "kot" , "ma", "ale", "dd1", "dd2", "dd3"};
	vector<string> authors = { "Krzysiek", "Tomek", "Krzysiek", "Karol" , "Karol" , "Krzysiek", "ale", "dd1", "dd2", "dd3" };

	for (int index = 0; index < 10; index++) {
		booksCollection.push_back(
			Book( teksts[index], authors[index], 1995, "31-31134")
			);
	}

	BookRepository bookRepository = BookRepository(booksCollection);



	for each (Book book in bookRepository.findBy("Krzysiek") )
	{
		cout << book.getId() << "  " << book.getName() << "\n";
	}
	
	cin.get();
	return 0;
}