#ifndef ONLINEBOOKREADER_BOOK_H
#define ONLINEBOOKREADER_BOOK_H
#include <bits/stdc++.h>
using namespace std;

class Book {
private:
    string title;
    string isbn;
    string author_name;
    int number_of_pages;
    vector<string>pages;
public:
    void SetTitle(const string &title);
    string GetTitle() const;
    void SetIsBn(const string &isbn);
    string GetIsBn()const;
    void SetNumberOfPages(const int &number_of_pages);
    int GetNumberOfPages()const;
    void SetPages(const vector<string>&pages);
    vector<string> GetPages()const;
    void SetAuthor(const string &Author);
    string GetAuthor()const;
    void Read();

};


#endif //ONLINEBOOKREADER_BOOK_H
