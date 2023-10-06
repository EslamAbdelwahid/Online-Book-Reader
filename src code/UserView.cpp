#include "UserView.h"
using namespace std;

UserView::UserView(UsersManager &usersManager1, BooksManager &booksManager1):usersManager(usersManager1),
booksManager(booksManager1){
}
void UserView::View() {
    cout << "Hello " << usersManager.GetCurrentUser()->GetName() << " | User View\n";
    vector<string>menu;
    menu.push_back("View Profile");
    menu.push_back("List & Select from my Reading history");
    menu.push_back("List & Select from Available Books");
    menu.push_back("Logout");
    int choice ;
    do{
        choice = helperFunctions.ShowMenu(menu);
        if(choice == 1){
            usersManager.GetCurrentUser()->ViewProfile();
        }else if(choice == 2){
            usersManager.ListAndSelectFromMyReadingHistory();
        }else if(choice == 3){
            Book *book = booksManager.ListAndSelectFromAvailableBooks();
            if(book->GetTitle() != ""){
                BookReadingSession *session = new BookReadingSession(*book);
                session->Moves();
                usersManager.SetSession(session);
            }
        }
    }while (choice != menu.size());
}
