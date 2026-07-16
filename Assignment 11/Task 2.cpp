#include <iostream>
#include <string>
#include <utility>
using namespace std;

struct Book {
    string title;
    string author;
    int publicationYear;
};

void addBook(Book books[], int& count) {
    cout << "\nEnter Book Title: ";
    getline(cin, books[count].title);
    cout << "Enter Author Name: ";
    getline(cin, books[count].author);
    cout << "Enter Publication Year: ";
    cin >> books[count].publicationYear;
    cin.ignore();
    count++;
    cout << "Book has been added successfully!\n";
}

void searchByTitle(Book books[], int count) {
    string title;
    cout << "\nEnter title to search: ";
    getline(cin, title);
    for (int i = 0; i < count; i++) {
        if (books[i].title == title) {
            cout << "\nBook Found:\n";
            cout << books[i].title << " by " << books[i].author
                 << ", Published in " << books[i].publicationYear << endl;
            return;
        }
    }
    cout << "No book with this title found!\n";
}

void searchByAuthor(Book books[], int count) {
    string name;
    cout << "\nEnter author's name: ";
    getline(cin, name);
    bool found = false;
    for (int i = 0; i < count; i++) {
        if (books[i].author == name) {
            cout << "\nBook:\n";
            cout << books[i].title << " by " << books[i].author
                 << ", Published in " << books[i].publicationYear << endl;
            found = true;
        }
    }
    if (!found)
        cout << "No books from this author were found!\n";
}

void sortByTitle(Book books[], int count) {
    for (int i = 0; i < count - 1; i++) {
        for (int j = i + 1; j < count; j++) {
            if (books[j].title < books[i].title) {
                swap(books[i], books[j]);
            }
        }
    }
    cout << "Books have been sorted alphabetically by title!\n";
}

void displayBooks(Book books[], int count) {
    if (count == 0) {
        cout << "There are no books to show!\n";
        return;
    }
    cout << "\n----- BOOK COLLECTION -----\n";
    for (int i = 0; i < count; i++) {
        cout << i + 1 << ". " << books[i].title
             << " by " << books[i].author
             << ", Published in " << books[i].publicationYear << endl;
    }  
}

int main() {
    Book books[100];
    int count = 0;
    int choice;
    do {
        cout << "\n===== MENU =====\n";
        cout << "1. Add New Book\n";
        cout << "2. Search by Title\n";
        cout << "3. Search by Author\n";
        cout << "4. Sort Books by Title\n";
        cout << "5. Display All Books\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();
        
        switch (choice) {
            case 1: addBook(books, count); break;
            case 2: searchByTitle(books, count); break;
            case 3: searchByAuthor(books, count); break;
            case 4: sortByTitle(books, count); break;
            case 5: displayBooks(books, count); break;
            case 6: cout << "Exiting the program...\n"; break;
            default: cout << "Invalid input! Please try again.\n"; break;
        }
    } while (choice != 6);
    return 0;
}