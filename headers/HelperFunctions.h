#ifndef ONLINEBOOKREADER_HELPERFUNCTIONS_H
#define ONLINEBOOKREADER_HELPERFUNCTIONS_H

#include <bits/stdc++.h>
using namespace std;

class HelperFunctions{
private:
public:
    int GetChoice(int l , int r);
    int ShowMenu(const vector<string> &choices);
    vector<string> SpiltString(string &str);
    int ToInt(string &str);
    string ToString(vector<string>&all);
    string GetTime() const;
};



#endif //ONLINEBOOKREADER_HELPERFUNCTIONS_H
