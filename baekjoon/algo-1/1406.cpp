#include<iostream>
#include<stack>
#include<string>

using namespace std;

void printAll(stack<char>& s1){
    if(s1.empty()) return ;
    char top = s1.top();
    s1.pop();
    printAll(s1);
    cout << top;
}

int main(){
    string init;
    stack<char> stk_1, stk_2;
    int i, t;
    getline(cin, init);
    for(auto c : init){
        stk_1.push(c);
    }
    cin >> t;
    for(i = 0; i < t; i++){
        char cmd;
        cin >> cmd;
        if(cmd == 'L'){
            if(stk_1.empty()) continue;
            stk_2.push(stk_1.top());
            stk_1.pop();
        }
        else if(cmd == 'D'){
            if(stk_2.empty()) continue;
            stk_1.push(stk_2.top());
            stk_2.pop();
        }
        else if(cmd == 'B'){
            if(stk_1.empty()) continue;
            stk_1.pop();
        }
        else if(cmd == 'P'){
            char p;
            cin >> p;
            stk_1.push(p);
        }
    }
    printAll(stk_1);
    while(!stk_2.empty()){
        cout << stk_2.top();
        stk_2.pop();
    }
    return 0;
}