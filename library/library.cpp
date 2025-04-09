#include <iostream>
#include <vector>
#include <memory>

using namespace::std;

//base class
class Book {
protected:
    /* data */
    string title;
    string author;
    bool isAvailable;
public:
    Book (string t, string a) : title(t), author(a), isAvailable(true) {}

    virtual void displayInfo() const = 0; //pure virtual function

    void borrow() {
        if(isAvailable) {
            isAvailable = false;
            std::cout << title << " has been borrowed" << std::endl;
        } else {
            isAvailable = true;
            std::cout << title << " has been returned" << std::endl;
        }
    }
    string getTitle() const {return title;}
    virtual ~Book() {} //virtual destructor
};

//derived class for fiction
class FictionBook : public Book {
private:
    string genre;
public:
    FictionBook (string t, string a, string g) : Book(t, a), genre(g) {}
    void displayInfo() const override {
        std::cout << "Fiction: " << title << " by " << author << std::endl;
        std::cout << "Genre: " << genre << std::endl;
        std::cout << (isAvailable? "Available" : "Borrowed") << std::endl << std::endl;
    }
};

//derived class for non-fiction
class NonFictionBook : public Book {
private:
    string subject;
public:
    NonFictionBook (string t, string a, string s) : Book(t, a), subject(s) {}
    void displayInfo() const override {
        std::cout << "Non-Fiction: " << title << " by " << author << std::endl;
        std::cout << "Subject: " << subject << std::endl;
        std::cout << (isAvailable? "Available" : "Borrowed") << std::endl << std::endl;
    }
};

//library class to manage books
class Library {
private:
    std::vector<std::unique_ptr<Book>> books;
public:
    void addBook(std::unique_ptr<Book> book) {
        books.push_back(std::move(book));
    }
    void displayAllBooks() const {
        if (books.empty()) {
            std::cout << "No books in the library" << std::endl << std::endl;
            return;
        }
        for (const auto& book : books) {
            book->displayInfo();
        }
    }
    void borrowBook(string title) {
        for (auto& book : books) {
            if (book->getTitle() == title) {
                book->borrow();
                return;
            }
        }
        std::cout << "Book '" << title << "' not found" << std::endl;
    }
};
int main() {
    Library library;
    int choice;
    string title, author, extra;

    do
    {
        std::cout << std::endl << "Library Menu" << std::endl;
        std::cout << std::endl << "1. Add Fiction Book" << std::endl;
        std::cout << std::endl << "2. Add Non-Fiction Book" << std::endl;
        std::cout << std::endl << "3. Display All Books" << std::endl;
        std::cout << std::endl << "4. Borrow a book" << std::endl;
        std::cout << std::endl << "5. Exit" << std::endl;
        std::cout << std::endl << "Enter choice: ";
        std::cin >> choice;
        std::cin.ignore(); //clear newline from input buffer

        switch (choice)
        {
        case 1: //add fiction book
            std::cout << "Title: "; std::getline(std::cin, title);
            std::cout << "Author: "; std::getline(std::cin, author);
            std::cout << "Genre: "; std::getline(std::cin, extra);
            library.addBook(std::make_unique<FictionBook>(title, author, extra));
            break;
        
        case 2: //add nonfiction book
            std::cout << "Title: "; std::getline(std::cin, title);
            std::cout << "Author: "; std::getline(std::cin, author);
            std::cout << "Subject: "; std::getline(std::cin, extra);
            library.addBook(std::make_unique<NonFictionBook>(title, author, extra));
            break;
        
        case 3: //display all books
            library.displayAllBooks();
            break;
        
        case 4: //borrow book
            std::cout << "Enter the title of the book to borrow ";
            std::getline(std::cin, title);
            library.borrowBook(title);
            break;

        case 5: //exit
            std::cout << "Exiting..." << std::endl;
            break;
        
        default:
            std::cout << "Invalid choice" << std::endl;
        }
    } while (choice != 5);

    return 0;
    
}