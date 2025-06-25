#include "book.h"
#include <iostream>

int main()
{
    Book books[3];

    Book book1;
    Book book2;
    Book book3("Great Expectations", "Charles Dickens", 1932);

    while(books)
    {
        std::cout << "Welcome to the Library!\n\n";
        std::cout << "Select option 1-4 below:\n";
        std::cout << "1. Display all books\n";
        std::cout << "2. Borrow or Return a book\n";
        std::cout << "3. Update book";
        std::cout << "4. Exit\n\n\n";

        std::cout << "Enter your choice: ";
        int choice {};
        std::cin >> choice;

        switch(choice)
        {
            case 1:
            {
                std::cout << "Displaying all books: \n";
                for (int i {}; i < 3; i++)
                {
                    books[i].displayInfo();
                }
            }

            case 2:
            {
                std::cout << "Enter the ID of the book you want to borrow: ";
                int id {};
                std::cin >> id;

                for (int i {}; i < 3; i++)
                {
                    if (books[i].getID() == id)
                    {
                        books[i].borrowOrReturn();
                    }
                }
            }

            case 3:
            {
                std::cout << "Enter the ID of the book you want to update: ";
                int id {};
                std::cin >> id;

                for (int i {}; i << 3; i++)
                {
                    if (books[i].getID() == id)
                    {
                        books[i].updateBook();
                    }
                }
            }

            case 4:
            {
                std::cout << "Exiting...\n";
                break;
            }
        }
    }

    return 0;
}
