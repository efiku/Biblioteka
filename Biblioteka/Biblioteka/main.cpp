#include <iostream>
#include <vector>
#include "Book.h"

using namespace Library;
int main() {
	 
	vector<Book> booksCollection; 
	vector<string> teksts = { "ala ", "ma", "kota", "a" , "kot" , "ma", "ale", "dd1", "dd2", "dd3"};

	for (int index = 0; index < 10; index++) {
		booksCollection.push_back(
			Book( teksts[index], "Krzysiek", 1995, "31-31134")
			);
	}
	
	for each (Book book in booksCollection)
	{
		cout << book.getId() << "  " << book.getName() << "\n";
	}
	
	cin.get();
	return 0;
}