#include <iostream>
#include <string>

int global {};

class Book
{
    private:

    std::string title;
    std::string author;
    int bookID;
    bool isAvailable;

    public:

    Book(){
        title = "";
        author = "";
        bookID = global;
        global++;
        isAvailable = true;

    }

    /*Book(std::string title, std::string author, int bookID, bool isAvailable)
        : title(title), author(author), bookID(bookID), isAvailable(isAvailable) {}*/

    ~Book()
    {
        std::cout << "Book destructor called" << std::endl;
    }

    void setInfo()
    {
        std::cout << "Enter a Title: " << std::endl;
        std::getline(std::cin, title);

        std::cout << "Enter the Author: " << std::endl;
        std::getline(std::cin, author);
    }

    void displayInfo()
    {
        std::cout << "ID: " << bookID << '\n';
        std::cout << "Title: " << title << '\n';
        std::cout << "Author: " << author << '\n';
        std::cout << "Availability: " << (isAvailable ? "Available" : "Unavailable") << '\n';
    }

    void borrowBook()
    {
        if (isAvailable == true)
        {
            isAvailable = false;
            std::cout << "Book borrowed successfully!\n";
        }
    }

    void returnBook()
    {
        if(isAvailable == false)
        {
            isAvailable = true;
            std::cout << "Book returned successfully!\n";
        }
    }
};

int main()
{
    std::cout << "Welcome to the Library!";


    return 0;
}
