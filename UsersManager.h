
#ifndef ONLINEBOOKREADER_USERSMANAGER_H
#define ONLINEBOOKREADER_USERSMANAGER_H
#include <bits/stdc++.h>
using namespace std;
#include "User.h"
#include "HelperFunctions.h"

class UsersManager {
private:
    User *current_user {nullptr};
    map < string, User * > username_userobject;
    void FreeLoadData();
    HelperFunctions helperFunctions;
public:
    UsersManager();
    ~UsersManager();
    UsersManager(const UsersManager&)= delete;
    void operator =(const UsersManager&)= delete;
    void LoadDatabase();
    void LogIn();
    void SignUp();
    void Access();
    const User* GetCurrentUser() const {
        return current_user;
    }
    void SetSession(BookReadingSession *session);
    void ListAndSelectFromMyReadingHistory();
};


#endif //ONLINEBOOKREADER_USERSMANAGER_H
