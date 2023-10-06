#include "AdminView.h"
using namespace std;
AdminView ::AdminView(UsersManager &usersManager1, BooksManager &booksManager1):usersManager(usersManager1),
booksManager(booksManager1) {
}
void AdminView::View() {
    cout << "\nHello " << usersManager.GetCurrentUser()->GetName() << " | " << "Admin View\n";
    vector<string>menu;
    menu.push_back("View profile");
    menu.push_back("Add book");
    menu.push_back("Logout");
    int choice;
    do{
        choice =  helperFunctions.ShowMenu(menu);
        if(choice == 1) ViewProfile();
        else if(choice == 2) AddBook();
    } while (choice != 3);
}
void AdminView::ViewProfile() {
    usersManager.GetCurrentUser()->ViewProfile();
}
void AdminView::AddBook() {
    Book *book = new Book();
    book->Read();
    booksManager.AddBook(book);
}