#include "User.h"
using namespace std;
User::User() : name(""),password(""),email(""),user_name(""),is_admin(0) {

}
User::~User() {
    for(auto &session:sessions){
        delete session;
    }
    sessions.clear();
}
void User::Read(const string &username) {
    SetUserName(username);
    string str;
    cout << "\nEnter your name:";
    getline(cin, str);
    getline(cin, str);
    SetName(str);
    cout << "\nEnter your password:";
    cin >> str;
    SetPassword(str);
    cout << "\nEnter your email:";
    getline(cin, str);
    getline(cin , str);
    SetEmail(str);
}
string User::GetEmail() const {
    return email;
}

string User::GetUserName() const {
    return user_name;
}
string User::GetPassword() const {
    return password;
}
string User::GetName() const {
    return name;
}

void User::SetEmail(const string &email) {
    this->email = email;
}
void User::SetUserName(const string &username) {
    user_name = username;
}
void User::SetPassword(const string &password) {
    this->password = password;
}
void User::SetName(const string &name) {
    this->name = name;
}
void User::SetIsAdmin(const int &is_admin) {
    this->is_admin = is_admin;
}
int User::GetIsAdmin() const {
    return is_admin;
}
string User::ToString() {
    ostringstream oss;
    oss << name << "," << user_name << "," << email << "," << password << "," << is_admin;
    return oss.str();
}
void User::SetSession(BookReadingSession *session) {
    sessions.push_back(session);
}
vector<BookReadingSession*> User::GetSessions() const {
    return sessions;
}
void User::ViewProfile() const {
    cout << "\nName    :" << GetName() << "\n";
    cout << "Username:" << GetUserName() << "\n";
    cout << "Email   :" << GetEmail() << "\n";
}