#ifndef ONLINEBOOKREADER_USERVIEW_H
#define ONLINEBOOKREADER_USERVIEW_H
#include "UsersManager.h"
#include "BooksManager.h"
#include "BookReadingSession.h"
class UserView {
private:
    UsersManager &usersManager;
    BooksManager &booksManager;
    HelperFunctions helperFunctions;
public:
    UserView(UsersManager &usersManager1, BooksManager &booksManager1);
    void View();
};


#endif //ONLINEBOOKREADER_USERVIEW_H
