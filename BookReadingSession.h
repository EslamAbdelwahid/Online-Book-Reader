#ifndef ONLINEBOOKREADER_BOOKREADINGSESSION_H
#define ONLINEBOOKREADER_BOOKREADINGSESSION_H
#include <bits/stdc++.h>
#include "Book.h"
#include "HelperFunctions.h"
using namespace std;

class BookReadingSession {
private:
    Book &book;
    int current_page;
    string last_date;
    HelperFunctions helperFunctions;
public:
    BookReadingSession(Book &book1);
    void SetLastDate();
    string GetLastDate() const;
    void Moves();
    Book *GetBook() const;
};


#endif //ONLINEBOOKREADER_BOOKREADINGSESSION_H
