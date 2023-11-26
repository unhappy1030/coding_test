#include<iostream>
#include<queue>
#include<string>

using namespace std;

int main(){
    queue<int> q;
    int i, t;
    cin >> t;
    for(i = 0; i < t; i++){
        string str;
        cin >> str;
        if(str == "push"){
            int p;
            cin >> p;
            q.push(p);
        }
        else if(str == "pop"){
            if(q.empty()) cout << -1 << endl;
            else{
                cout << q.front() << endl;
                q.pop();
            }
        }
        else if(str == "size"){
            if(q.empty()) cout << 0 << endl;
            else{
                cout << q.size() << endl;
            }
        }
        else if(str == "empty"){
            if(q.empty()){
                cout << 1 << endl;
            }
            else{
                cout << 0 << endl;
            }
        }
        else if(str == "front"){
            if(q.empty()) cout << -1 << endl;
            else{
                cout << q.front() << endl;
            }
        }
        else if(str == "back"){
            if(q.empty()) cout << -1 << endl;
            else{
                cout << q.back() << endl;
            }
        }
    }
    return 0;
}