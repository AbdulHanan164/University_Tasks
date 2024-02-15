#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Book {
    string author;
    string title;
    int id;
    string genre;
    Book* next;

    Book(int id,  string& author,  string& title,  string& genre)
        : id(id), author(author), title(title), genre(genre), next(nullptr) {}
};

class Library {
public:
    Book* head;

    Library() : head(nullptr) {}

    void Add(int ID,  string& A,  string& T,  string& G) {
        // Check if the book with the same ID already exists
        Book* current = head;
        while (current != nullptr) {
            if (current->id == ID) {
                cout << "enter a unique id" << endl;
                return;
            }
            current = current->next;
        }
        // Book ID is unique while adding the book
        Book* newBook = new Book(ID, A, T, G);
        newBook->next = head;
        head = newBook;
        cout << "Book added successfully!" << endl;
    }

    void Print() {
        Book* current = head;
        while (current != nullptr) {
            PrintBookDetails(current);
            current = current->next;
        }
    }

    void print_author( string& author) {
        Book* current = head;
        while (current != nullptr) {
            if (current->author == author) {
                PrintBookDetails(current);
            }
            current = current->next;
        }
    }

    void updateBook(int id,  string& N_A,  string& N_T,  string& N_G) {
        Book* current = head;
        while (current != nullptr) {
            if (current->id == id) {
                current->author = N_A;
                current->title = N_T;
                current->genre = N_G;
                cout << "Book updated successfully!" << endl;
                return;
            }
            current = current->next;
        }
        cout << "Book not found" << endl;
    }

    void removeBook(int id) {
        Book* current = head;
        Book* prev = nullptr;
        while (current != nullptr) {
            if (current->id == id) {
                char confirm;
                cout << "press y or Y to remove or n or N to not remove :";
                cin >> confirm;

                if (confirm == 'Y' || confirm == 'y') {
                    if (prev == nullptr) {
                        head = current->next;
                    }
                    else {
                        prev->next = current->next;
                    }
                    delete current;
                    cout << "Book removed" << endl;
                    return;
                }
                else {
                    cout << "Remove cancelled" << endl;
                    return;
                }
            }
            prev = current;
            current = current->next;
        }
        cout << "not found" << endl;
    }

    void generateReports() {
        int choice;
        cout << "1. List all books in the library" << endl;
        cout << "2. Find books by genre" << endl;
        cout << "3. Display library describtion" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            Print();
        }
        else if (choice == 2) {
            string genre;
            cout << "Enter genre to find books: ";
            cin.ignore();
            getline(cin, genre);
            print_genre(genre);
        }
        else if (choice == 3) {
            report();
        }
        else {
            cout << "Invalid choice" << endl;
        }
    }

    void print_genre( string& genre) {
        Book* current = head;
        while (current != nullptr) {
            if (current->genre == genre) {
                PrintBookDetails(current);
            }
            current = current->next;
        }
    }

    void report() {
        int count = 0;
        Book* current = head;
        while (current != nullptr) {
            count++;
            current = current->next;
        }
        cout << "Total number of books in the library are: " << count << endl;
    }

    void saveLibraryData(string filename) {
        ofstream myfile(filename);
        if (myfile.is_open()) {
            Book* current = head;
            while (current != nullptr) {
                myfile << current->id << "  " << current->author << "   " << current->title << "   " << current->genre << endl;
                current = current->next;
            }
            myfile.close();
            cout << "Library data saved" << endl;
        }
        else {
            cout << "Error in saving data" << endl;
        }
    }

    void loadLibraryData( string filename) {
        ifstream myfile(filename);
        if (myfile.is_open()) {
            int id;
            string author, title, genre;
            while (myfile >> id >> author >> title >> genre) {
                Add(id, author, title, genre);
            }
            myfile.close();
            cout << "Library data loaded successfully!" << endl;
        }
        else {
            cout << "Error in loading data" << endl;
        }
    }

    ~Library() {
        while (head != nullptr) {
            Book* temp = head;
            head = head->next;
            delete temp;
        }
    }

    void PrintBookDetails( Book* book) {
        cout << "Book Id is: " << book->id << endl;
        cout << "Author name is: " << book->author << endl;
        cout << "Book title is: " << book->title << endl;
        cout << "Genre is: " << book->genre << endl;
    }
};

int main() {
    Library myLibrary;
    myLibrary.loadLibraryData("Library.txt");

    int choice;
    do {
        cout << "\n===== Library Management System =====" << endl;
        cout << "1. Add a book" << endl;
        cout << "2. Print all books" << endl;
        cout << "3. View books by author" << endl;
        cout << "4. Update a book" << endl;
        cout << "5. Remove a book" << endl;
        cout << "6. Generate Library Reports" << endl;
        cout << "7. Save library data to file" << endl;
        cout << "8. Load library data from file" << endl;
        cout << "9. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            int id;
            string author, title, genre;
            cout << "Enter book details:" << endl;
            cout << "ID: ";
            cin >> id;
            cout << "Author: ";
            cin.ignore();
            getline(cin, author);
            cout << "Title: ";
            getline(cin, title);
            cout << "Genre: ";
            getline(cin, genre);

            myLibrary.Add(id, author, title, genre);
        }
        else if (choice == 2) {
            myLibrary.Print();
        }
        else if (choice == 3) {
            string author;
            cout << "Enter author name to view books: ";
            cin.ignore();
            getline(cin, author);
            myLibrary.print_author(author);
        }
        else if (choice == 4) {
            int id;
            string N_A, N_T, N_G;
            cout << "Enter book ID to update: ";
            cin >> id;
            cout << "Enter new details:" << endl;
            cout << "New Author: ";
            cin.ignore();
            getline(cin, N_A);
            cout << "New Title: ";
            getline(cin, N_T);
            cout << "New Genre: ";
            getline(cin, N_G);
            myLibrary.updateBook(id, N_A, N_T, N_G);
        }
        else if (choice == 5) {
            int id;
            cout << "Enter book ID to remove: ";
            cin >> id;
            myLibrary.removeBook(id);
        }
        else if (choice == 6) {
            myLibrary.generateReports();
        }
        else if (choice == 7) {
            myLibrary.saveLibraryData("Library.txt");
        }
        else if (choice == 8) {
            myLibrary.loadLibraryData("Library.txt");
        }
        else if (choice == 9) {
            cout << "Exiting the program." << endl;
        }
        else {
            cout << "Invalid choice" << endl;
        }

    } while (choice != 9);

    return 0;
}
