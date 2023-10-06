#include "BookReadingSession.h"
using namespace std;

BookReadingSession ::BookReadingSession(Book &book1): book(book1),current_page(1) {

}
void BookReadingSession::SetLastDate() {
    last_date = helperFunctions.GetTime();
}
string BookReadingSession::GetLastDate()const{
    return last_date;
}
void BookReadingSession::Moves(){
    cout << "Current Page is " << current_page << "\\" << book.GetNumberOfPages() << "\n";
    SetLastDate();
    vector<string>menu;
    menu.push_back("Next Page");
    menu.push_back("Previous Page");
    menu.push_back("Stop Reading");
    int cur = current_page;
    int choice = helperFunctions.ShowMenu(menu);
    if(choice == 1) ++cur;
    else if(choice == 2) --cur;
    else return;
    if(cur < 1 || cur > book.GetNumberOfPages()){
        cout << "Out of boundaries\n";
    }else current_page = cur;
    Moves();
}
Book *BookReadingSession::GetBook() const {
    return &book;
}