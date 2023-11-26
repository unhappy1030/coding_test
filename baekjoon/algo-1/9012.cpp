#include<iostream>
#include<string>
#include<stack>
using namespace std;

bool convert(char c){
    if(c == '(') return true;
    if(c == ')') return false;
}

bool check(string s){
    stack<char> stk;
    int i;
    for(i = 0; i < s.size(); i++){
        if(convert(s[i])){
            stk.push(s[i]);
        }
        else{
            if(stk.empty()){
                return false;
            }
            else{
                stk.pop();
            }
        }
    }
    if(stk.empty())return true;
    return false;
}

int main(){
    int i, t;
    string str;
    cin >> t;
    cin.ignore();
    for(i = 0; i < t; i++){
        getline(cin, str);
        if(check(str)){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}