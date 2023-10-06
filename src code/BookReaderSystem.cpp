#include "BookReaderSystem.h"
using namespace std;
BookReaderSystem::BookReaderSystem():usersManager(new UsersManager()) , booksManager(new BooksManager()){

}
BookReaderSystem::~BookReaderSystem() {
    if(booksManager != nullptr){
        delete booksManager;
        booksManager = nullptr;
    }
    if(usersManager != nullptr){
        delete usersManager;
        usersManager = nullptr;
    }
}
void BookReaderSystem::Run() {
    usersManager->LoadDatabase();
    while (true) {
        usersManager->Access();
        if(usersManager->GetCurrentUser()->GetIsAdmin()){
            AdminView adminView(*usersManager, *booksManager);
            adminView.View();
        }else{
            UserView userView(*usersManager, *booksManager);
            userView.View();
        }
    }
}