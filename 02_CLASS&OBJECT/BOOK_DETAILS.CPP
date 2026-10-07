#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
    string author;
    float price;

public:
    void setBookDetails() {
        cout << "Enter Book Title: ";
        cin.ignore();
        getline(cin, title);
        cout << "Enter Author Name: ";
        getline(cin, author);
        cout << "Enter Price: ";
        cin >> price;
    }

    void displayBookDetails() {
        cout << "\n--- Book Information ---" << endl;
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: ₹" << price << endl;
    }
};

int main() {
    Book b;
    b.setBookDetails();
    b.displayBookDetails();
    return 0;
}
