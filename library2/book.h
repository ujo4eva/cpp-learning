#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include <stdexcept>
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

        while (title.empty())
        {
            throw std::invalid_argument("Title cannot be empty");
            std::getline(std::cin, title);
        }

        std::cout << "Title updated!";
    }

    void setAuthor()
    {
        std::cout << "Enter a new author: ";
        std::getline(std::cin, author);

        while (author.empty())
        {
            throw std::invalid_argument("Author cannot be empty");
            std::getline(std::cin, author);
        }

        std::cout << "Author updated!";
    }

    void setPubYear()
    {
        int newYear {};
        std::cout << "Enter a new publishing year: ";
        std::cin >> newYear;

        while (!(newYear > 0 && newYear <= 2025))
        {
            throw std::invalid_argument("Invalid year " + std::to_string(newYear));
            std::cin >> newYear;
        }

        std::cout << "Publishing year updated!";
    }

    void updateBook()
    {
        try
        {
            setTitle();
        } catch (const std::invalid_argument& e)
        {
            std::cerr << "Error: " << e.what() << '\n';
        }

        try
        {
            setAuthor();
        } catch (const std::invalid_argument& e)
        {
            std::cerr << "Error: " << e.what() << '\n';
        }

        try
        {
            setPubYear();
        } catch (const std::invalid_argument& e)
        {
            std::cerr << "Error: " << e.what() << '\n';
        }
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
