#include <iostream>
#include <string>


struct point
{
	double x;
	double y;
};

struct triangle2
{
	point vertex1;
	point vertex2;
	point vertex3;
};


struct triangle
{
	double side1;
	double side2;
	double side3;
};


// book - year, author, pages, weight, language, ...
struct Lang
{
	std::string displayName;
	std::string code;

	std::string alphabet;
	int year;
};


struct Book
{
	short year;
	std::string author;
	int pages;

	Lang language;
};

struct shelf
{
	int number_of_books;
	Book books[10];
	std::string password;
};



Book global_book;

void print(Book b)
{
	b.pages = 10;
	std::cout << b.author << ", " << b.year << ", " << b.language.displayName << "," << b.pages << std::endl;
}

void print(Book* books, int count)
{
	//for (int i = 0; i < count; i++)
	//	print(books[i]);

	while (count-- > 0)
	{
		print(*books);
		books++;
	}
}

void print(short year, std::string author, int pages, char language)
{
	pages = 10;
	std::cout << author << ", " << year << ", " << language << "," << pages << std::endl;
}

void print(short* year, std::string* author, int* pages, char* language, int count)
{
	for (int i = 0; i < count; i++)
		print(year[i], author[i], pages[i], language[i]);
}

void print_i_plus_1(int i)
{
	i = i + 1;
	std::cout << i << std::endl;
}

void print_i_plus_1(int* pi)
{
	int i = *pi;
	*pi = *pi + 1;
	std::cout << *pi << std::endl;
}

void modify_the_book(Book* book)
{
	(*book).language.code = 'f';		// correct

	//book.language = 'f';				// wrong
	book->language.code = 'f';			// better
	book->language.displayName = "franch";
}

void f()
{
	print(global_book);
}

Book InputBook()
{
	Book b;

	std::cout << "Who's the author: ";
	std::cin >> b.author;

	std::cout << "When it was published: ";
	std::cin >> b.year;

	return b;
}


int main()
{
	// int, double, bool, ...

	int i = 10;
	print_i_plus_1(i);
	print_i_plus_1(&i);


	short year = 1997;
	std::string author = "Straustroop";
	int pages = 800;
	char lang = 'e';
	print(year, author, pages, lang);

	Lang en;
	en.displayName = "english";
	en.alphabet = "abcde";
	en.year = 500;
	en.code = "en";

	Lang am;
	en.displayName = "armenian";
	en.alphabet = "abg";
	en.year = 304;
	en.code = "am";


	Book book1;
	book1.year = 1997;
	book1.author = "Straustroop";
	book1.pages = 800;
	book1.language = en;
	print(book1);
	modify_the_book(&book1);
	print(book1);


	global_book = book1;

	Book books[3];
	books[0].author = "ara";
	books[0].language = en;
	books[0].pages = 10;
	books[0].year = 1860;
	books[1].author = "sahak";
	books[1].language = am;
	books[1].pages = 100;
	books[1].year = 1900;
	books[2].author = "newton";
	books[2].language = am;
	books[2].pages = 500;
	books[2].year = 1560;

	int* arrayOfNumbers = new int[40];
	Book* arrayOfBooks = new Book[15];
	print(books, 3);

	print(&book1, 1);

	f();


	// return value
	Book book2 = InputBook();
	print(book2);

	return 0;
}
