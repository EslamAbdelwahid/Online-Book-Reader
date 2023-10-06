#ifndef ONLINEBOOKREADER_USER_H
#define ONLINEBOOKREADER_USER_H
#include <bits/stdc++.h>
#include "HelperFunctions.h"
#include "BookReadingSession.h"
using namespace std;

class User {
private:
    string name;
    string password;
    string email;
    string user_name;
    int is_admin;
    vector<BookReadingSession*> sessions;
    HelperFunctions helper_functions;
public:
    User();
    ~User();
    void Read(const string &username);
    string GetEmail() const;
    string GetUserName() const;
    string GetPassword() const;
    string GetName() const;
    void SetEmail(const string &email);
    void SetUserName(const string &user_name);
    void SetPassword(const string &password);
    void SetName(const string &name);
    void SetIsAdmin(const int &is_admin);
    int GetIsAdmin() const;
    string ToString();
    void SetSession(BookReadingSession *session);
    vector<BookReadingSession*> GetSessions()const;
    void ViewProfile() const;
};

#endif //ONLINEBOOKREADER_USER_H
