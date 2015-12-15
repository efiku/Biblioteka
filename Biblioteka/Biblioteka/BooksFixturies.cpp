#include "BooksFixturies.h"
#include <time.h>
namespace Library {

	BooksFixturies::BooksFixturies() {

	}
	BooksFixturies::~BooksFixturies() {

	}

	vector<Book> BooksFixturies::getFixturedBooks(unsigned long numberOfBooks)
	{
		if (numberOfBooks <= 0) return vector<Book>();
		BooksFixturies self;
		srand(time(NULL));

		vector<string> names, authors, isbns;
		names = self.makeNames();
		authors = self.makeAuthors();
		isbns = self.makeISBNS();

		vector<Book> preparedBooks;
		for (unsigned long index = 0; index < numberOfBooks; index++) {
			preparedBooks.push_back(
				Book(
					names[ rand() % names.size()],
					authors [ rand() % authors.size() ],
					1990 + index,
					isbns [rand() % isbns.size()]
					)
				);
		}
		return preparedBooks;
	}

	vector<string> BooksFixturies::makeAuthors()
	{
		return  vector<string>() ={
			"Lena",
				"Zofia",
				"Zuzanna",
				"Hanna",
				"Julia",
				"Aleksandra",
				"Maja",
				"Amelia",
				"Jakub",
				"Jan",
				"Kacper",
				"Szymon",
				"Antoni",
				"Franciszek",
				"Filip"
		};
	}


	vector<string>  BooksFixturies::makeNames()
	{
		return vector<string>() = {
			"Srda �piewa o zmierzchu w Zielone �wi�tki",
				"Stowarzyszenie Umar�ych Poet�w",
				"wspomniana ju� wcze�niej",
				"Weronika postanawia umrze�",
				"Niecierpliwo�� serca",
				"Niezno�na lekko�� bytu",
				"Nie ma orchidei dla panny Blandish",
				"�mier� pi�knych saren",
				"Ballada o wzgardliwym wisielcu",
				"Pejza� Gnojnej G�ry",
				"Lekcje ta�ca dla starszych i zaawansowanych",
				"Lot nad kuku�czym gniazdem",
				"Pod os�on� nieba",
				"Stracone zachody mi�o�ci",
				"Nasz cz�owiek w Hawanie",
		};
	}


	vector<string> BooksFixturies::makeISBNS()
	{
		vector<string> isbns;
		for (int i = 0; i < 10; i++)
		{
			isbns.push_back(
				to_string(i + 1) +
				to_string(i) +
				"-" +
				to_string(i) +
				to_string(i + 1) +
				to_string(i)
				);
		}

		return isbns;
	}

}


