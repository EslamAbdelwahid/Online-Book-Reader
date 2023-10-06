#ifndef ONLINEBOOKREADER_ADMINVIEW_H
#define ONLINEBOOKREADER_ADMINVIEW_H
#include <bits/stdc++.h>
using namespace std;
#include "UsersManager.h"
#include "BooksManager.h"

class AdminView {
private:
    UsersManager &usersManager;
    BooksManager &booksManager;
    HelperFunctions helperFunctions;
public:
    AdminView(UsersManager &usersManager1, BooksManager &booksManager1);
    void View() ;
    void ViewProfile();
    void AddBook();

};


#endif //ONLINEBOOKREADER_ADMINVIEW_H
