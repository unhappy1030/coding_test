#include<iostream>
#include<string>
#include<vector>
using namespace std;

string reverse(string s){
    string re = "";
    int i;
    for(i = s.size() - 1; i >= 0; i--){
        re += s[i];
    }
    return re;
}

string reverse_word_line(string s){
    vector<string> sliced;
    int i;
    string sli = "";
    for(i = 0; i < s.size(); i++){
        if(s[i] == ' '){
            sliced.push_back(sli);
            sli = "";
            continue;
        }
        sli += s[i];
    }
    sliced.push_back(sli);
    string re_line = "";
    for(i = 0; i < sliced.size(); i++){
        re_line += reverse(sliced[i]) + ' ';
    }
    return re_line;
}


int main(){
    int i, t;
    cin >> t;
    string str;
    cin.ignore();
    for(i = 0; i < t; i++){
        getline(cin, str);
        cout << reverse_word_line(str) << endl;
    }
    return 0;
}