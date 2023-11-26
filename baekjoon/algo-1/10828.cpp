#include<iostream>

using namespace std;

class Node{
public:
    int data;
    Node* next = nullptr;
    Node(int d, Node* n){
        data = d;
        next = n;
    }
};
using node = Node*;
class Stack{
private:
    node header;
public:
    Stack(){ header = nullptr; }
    bool empty(){
        if(header == nullptr) return true;
        return false;
    }
    int top(){
        if(empty()){
            return -1;
        }
        return header->data;
    }
    void push(int num){
        node x = new Node(num, header);
        header = x;
    }
    int pop(){
        if(empty()){
            return -1;
        }
        else{
            int num = header->data;
            node x = header->next;
            delete header;
            header = x;
            return num;
        }
    }
    int size(){
        if(empty()){
            return 0;
        }
        else{
            int cnt = 0;
            node x = header;
            while(x != nullptr){
                cnt++;
                x = x->next;
            }
            return cnt;
        }
    }
};

int main(){
    int i, t;
    cin >> t;
    Stack stack;
    for(i = 0; i < t; i++){
        string s;
        int n;
        cin >> s;
        if(s == "push"){
            cin >> n;
            stack.push(n);
        }
        else if(s == "pop"){
            cout << stack.pop() << endl;
        }
        else if(s == "top"){
            cout << stack.top() << endl;
        }
        else if(s == "empty"){
            if(stack.empty()){
                cout<< "1" << endl;
            }
            else{
                cout<< "0" << endl;
            }
        }
        else if(s == "size"){
            cout << stack.size() << endl;
        }
    }
    return 0;
}