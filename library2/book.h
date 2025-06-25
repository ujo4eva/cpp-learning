#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include <string>

int global_ID {};

class Book
{
    int id;
    std::string title;
    std::string author;
    int publishYear;
    bool isAvailable;

    public:

    Book()
    {
        id = global_ID++;
        title = "";
        author = "";
        publishYear = 0;
        isAvailable = true;
    }

    Book(const std::string& title, const std::string& author, int publishYear) :
        id(global_ID++), title(title), author(author), publishYear(publishYear), isAvailable(true)
    {}

    void setTitle()
    {
        std::cout << "Enter a new title: ";
        std::getline(std::cin, title);
        std::cout << "Title updated!";
    }

    void setAuthor()
    {
        std::cout << "Enter a new title: ";
        std::getline(std::cin, author);
        std::cout << "Author updated!";
    }

    void setPubYear()
    {
        std::cout << "Enter a new publishing year: ";
        std::cin >> publishYear;
        std::cout << "Publishing year updated!";
    }

    void updateBook()
    {
        setTitle();
        setAuthor();
        setPubYear();
    }

    int getID()
    {
        return id;
    }

    std::string getTitle()
    {
        return title;
    }

    std::string getAuthor()
    {
        return author;
    }

    int getpublishYear()
    {
        return getpublishYear();
    }

    bool getAvailability()
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

    void displayInfo()
    {
        std::cout << "Book ID: " << id << '\n';
        std::cout << "Title: " << title << '\n';
        std::cout << "Author: " << author << '\n';
        std::cout << "Year published: " << publishYear << '\n';
        std::cout << "Availability: " << (isAvailable ? "Available\n\n" : "Unavailable\n\n");
    }
};

#endif
