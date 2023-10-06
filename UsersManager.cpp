#include "UsersManager.h"
using namespace std;
UsersManager ::UsersManager() {

}
UsersManager ::~UsersManager() {
    FreeLoadData();
}
void UsersManager::LoadDatabase(){
    User *user1 = new User();
    user1->SetName("eslam");
    user1->SetPassword("111");
    user1->SetEmail("eslam@gmail");
    user1->SetUserName("eslam9");
    user1->SetIsAdmin(1);
    username_userobject[user1->GetUserName()] = user1;

    User *user2 = new User();
    user2->SetName("ahmed");
    user2->SetPassword("222");
    user2->SetEmail("ahmed9@gmial");
    user2->SetUserName("ahmed10");
    username_userobject[user2->GetUserName()] = user2;

    User *user3 = new User();
    user3->SetName("osama");
    user3->SetPassword("333");
    user3->SetEmail("osama@gmail.com");
    user3->SetUserName("osama11");
    user3->SetIsAdmin(1);
    username_userobject[user3->GetUserName()] = user3;
}

void UsersManager::FreeLoadData() {
    for(auto pair : username_userobject){
        delete pair.second;
    }
    username_userobject.clear();
       current_user = nullptr;
}
void UsersManager::Access() {
    vector<string> menu;
    menu.push_back("LogIn");
    menu.push_back("SignUp");
    int choice = helperFunctions.ShowMenu(menu);
    if(choice == 1) LogIn();
    else SignUp();
}
void UsersManager::LogIn() {
    cout << "\nEnter username & password:";
    string username , password;
    cin >> username >> password;
    if(!username_userobject.count(username)){
        cout << "\nusername or password isn't correct, Try again\n";
        LogIn();
    }else{
        User *exist = username_userobject.find(username)->second;
        if(exist->GetPassword() != password){
            cout << "\nusername or password isn't correct, Try again\n";
            LogIn();
        }else{
            current_user = exist;
        }
    }
}
void UsersManager::SignUp() {
    string username;
    while (true){
        cout << "\nEnter username:"; cin >> username;
        if(username_userobject.count(username)){
            cout << "Already exist, try again\n";
        }else{
            break;
        }
    }
    current_user = new User();
    current_user->Read(username);
    username_userobject[username] = current_user;
}
void UsersManager::SetSession(BookReadingSession *session) {
    current_user->SetSession(session);
}
void UsersManager::ListAndSelectFromMyReadingHistory() {
    vector<BookReadingSession*> List = current_user->GetSessions();
    vector<string>menu;
    for(auto &session:List){
        string s = session->GetBook()->GetTitle();
        s += " Last Date: ";
        s += session->GetLastDate();
        menu.push_back(s);
    }
    if(menu.empty()){
        cout << "Your Reading History is empty.\n";
        return;
    }
    int choice = helperFunctions.ShowMenu(menu);
    int idx = 1;
    for(auto &session:List){
        if(idx == choice){
            session->Moves();
            return;
        }
        ++idx;;
    }
}
