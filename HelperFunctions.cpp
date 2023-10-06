#include "HelperFunctions.h"
using namespace std;
int HelperFunctions::GetChoice(int l , int r){
    cout << "Enter number in range " << l << " - " << r << ":";
    int choice ; cin >> choice;
    if(choice >= l && choice <= r) return choice;
    cout <<  "Invalid number, Try Again\n";
    return GetChoice(l , r);
}

int HelperFunctions::ShowMenu(const vector<string> &choices){
    cout << "Menu:\n";
    for(int ch = 0;ch < choices.size();++ch){
        cout << "\t" << ch + 1 << ": " << choices[ch] << "\n";
    }
    return GetChoice(1,(int)choices.size());
}
vector<string> HelperFunctions::SpiltString(string &str) {
    string s = str ,delimiter  = ",";
    vector<string> strs;
    int pos = 0;
    string substr;
    while ((pos = (int) s.find(delimiter)) != -1) {
        substr = s.substr(0, pos);
        strs.push_back(substr);
        s.erase(0, pos + delimiter.length());
    }
    strs.push_back(s);
    return strs;
}
int HelperFunctions::ToInt(string &str) {
    istringstream iss(str);
    int ans;
    iss>>ans;
    return ans;
}
string HelperFunctions::ToString(vector<string> &all) {
    ostringstream oss;
    for(int i = 0;i < all.size();++i){
        oss << all[i];
        if(i < all.size() - 1) oss << ",";
    }
    return oss.str();
}
string HelperFunctions::GetTime() const {
    time_t tt;
    struct tm *ti;
    time(&tt);
    ti = localtime(&tt);
    return asctime(ti);
}