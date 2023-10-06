#include "Book.h"
using namespace std;
void Book::SetTitle(const string &title) {
    this->title = title;
}
string Book::GetTitle() const {
    return title;
}
void Book::SetIsBn(const string &isbn) {
    this->isbn = isbn;
}
string Book::GetIsBn() const {
    return isbn;
}
void Book::SetNumberOfPages(const int &number_of_pages) {
    this->number_of_pages = number_of_pages;
}
int Book::GetNumberOfPages() const {
    return number_of_pages;
}
void Book::SetPages(const vector<string> &pages) {
    for(auto &i : pages){
        this->pages.push_back(i);
    }
}
vector<string> Book::GetPages() const {
    return pages;
}
void Book::SetAuthor(const string &Author){
    this->author_name = Author;
}
string Book::GetAuthor() const {
    return author_name;
}
void Book::Read() {
    string str;
    cout << "\nEnter Title:";
    getline(cin, str);
    getline(cin , str);
    SetTitle(str);
    cout << "\nEnter IsBn:";
    cin >> str;
    SetIsBn(str);
    cout << "\nEnter AuthorName:";
    getline(cin, str);
    getline(cin , str);
    SetAuthor(str);
    cout << "\nEnter How many pages:";
    int num; cin >> num;
    SetNumberOfPages(num);
    cout << "Enter Pages Text:\n";
    vector<string>_pages;
    getline(cin , str);
    for(int page = 1;page <= num;++page){
        cout << "page # " << page << " :";
        getline(cin , str);
        _pages.push_back(str);
    }
    SetPages(_pages);
}