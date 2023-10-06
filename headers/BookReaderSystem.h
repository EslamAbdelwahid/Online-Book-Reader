#ifndef ONLINEBOOKREADER_BOOKREADERSYSTEM_H
#define ONLINEBOOKREADER_BOOKREADERSYSTEM_H
#include <bits/stdc++.h>
using namespace std;
#include "UsersManager.h"
#include "BooksManager.h"
#include "AdminView.h"
#include "UserView.h"
#include "HelperFunctions.h"
class BookReaderSystem {
private:
    UsersManager *usersManager;
    BooksManager *booksManager;
    HelperFunctions helperFunctions;
public:
    BookReaderSystem();
    ~BookReaderSystem();
    void Run();
};


#endif //ONLINEBOOKREADER_BOOKREADERSYSTEM_H
