#include "book.h"
#include <cstdlib>

int main()
{
    Book books[3] = {
            Book("C++ Primer", "Stanley Lippman", 2012),
            Book("Great Expectations", "Charles Dickens", 1861),
            Book("Clean Code", "Robert Martin", 2008)
        };

    std::cout << "Welcome to the Library!\n\n";

    while(true)
    {
        std::cout << "Select option 1-4 below:\n";
        std::cout << "1. Display all books\n";
        std::cout << "2. Borrow or Return a book\n";
        std::cout << "3. Update book\n";
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

                std::cin.ignore();

                for (int i {}; i < 3; i++)
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
                exit(0);
            }

            default:
            {
                std::cout << "Invalid choice!\n";
            }
        }
    }

    return 0;
}
