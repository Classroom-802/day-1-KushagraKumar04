#include <iostream>
#include <string>
using namespace std;

class Book {
protected:
    string title, author;
    int isbn;

public:
    void setBookDetails(string t, string a, int i) {
        title = t;
        author = a;
        isbn = i;
    }
};

class Borrower {
protected:
    string name;
    int id;

public:
    void setBorrowerDetails(string n, int i) {
        name = n;
        id = i;
    }
};

class Library : public Book, public Borrower {
public:
    void borrowBook() {
        cout << "Borrower " << name << " (ID: " << id << ") has borrowed \"" << title << "\" by " << author << " (ISBN: " << isbn << ")." << endl;
    }

    void returnBook() {
        cout << "Borrower " << name << " (ID: " << id << ") has returned \"" << title << "\" by " << author << " (ISBN: " << isbn << ")." << endl;
    }
};

int main() {
    Library library;
    string title, author, name;
    int isbn, id, action;

    getline(cin, title);
    getline(cin, author);
    cin >> isbn >> name >> id >> action;

    library.setBookDetails(title, author, isbn);
    library.setBorrowerDetails(name, id);

    if (action == 1) {
        library.borrowBook();
    } else if (action == 2) {
        library.returnBook();
    } else {
        cout << "Invalid action type." << endl;
    }

    return 0;
}
