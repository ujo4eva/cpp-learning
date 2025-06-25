#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include <string>
#include <string_view>

class LibraryItem
{
    protected:

    static int nextID;
    int id;
    std::string title;

    public:

    LibraryItem() : id(nextID++), title("") {}

    LibraryItem(std::string_view title) : id(nextID++), title(title) {}

    virtual ~LibraryItem()
    {
        std::cout << "LibraryItem destructor called\n";
    }
};

class Book : public LibraryItem
{
    protected:

    std::string author;
    int publishYear;
    bool isAvailable;

    public:

    Book() : LibraryItem(), author(""), publishYear(0), isAvailable(true) {}

    Book(const std::string& title, const std::string& author, int publishYear) :
        LibraryItem(title), author(author), publishYear(publishYear), isAvailable(true)
    {}

    ~Book()
    {
        std::cout << "Book destructor called\n";
    }

    void setTitle()
    {
        std::cout << "Enter a new title: ";
        std::getline(std::cin, title);
        std::cout << "Title updated!";
    }

    void setAuthor()
    {
        std::cout << "Enter a new author: ";
        std::getline(std::cin, author);
        std::cout << "Author updated!";
    }

    void setPubYear()
    {
        int newYear {};
        std::cout << "Enter a new publishing year: ";
        std::cin >> newYear;

        while (!(newYear > 0 && newYear <= 2025))
        {
            std::cout << "Invalid year. Please enter a year between 1 and 2025: ";
            std::cin >> newYear;
        }

        std::cout << "Publishing year updated!";
    }

    void updateBook()
    {
        setTitle();
        setAuthor();
        setPubYear();
    }

    int getID() const
    {
        return id;
    }

    std::string getTitle() const
    {
        return title;
    }

    std::string getAuthor() const
    {
        return author;
    }

    int getpublishYear() const
    {
        return publishYear;
    }

    bool getAvailability() const
    {
        return isAvailable;
    }

    void borrowOrReturn()
    {
        isAvailable = !isAvailable;

        if (isAvailable)
        {
            std::cout << "Book returned\n";
        } else
        {
            std::cout << "Book borrowed\n";
        }
    }

    void displayInfo() const
    {
        std::cout << "Book ID: " << id << '\n';
        std::cout << "Title: " << title << '\n';
        std::cout << "Author: " << author << '\n';
        std::cout << "Year published: " << publishYear << '\n';
        std::cout << "Availability: " << (isAvailable ? "Available\n\n" : "Unavailable\n\n");
    }
};


#endif
