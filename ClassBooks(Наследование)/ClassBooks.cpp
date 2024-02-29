// ClassBooks.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Book {
private:
	string title;
	string author;

public:
	Book(const string& title, const string& author) : title(title), author(author){}

		string getTitle() const {
		return title;
	}

		string getAuthor() const {
		return author;
		}
};
