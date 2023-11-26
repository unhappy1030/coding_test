#include<iostream>
#include<stack>
#include<string>


using namespace std;

bool simulate(int arr[], int n, string& str){
    stack<int> stk;
    int i, f_idx = 0;
    for(i = 1; i <= n; i++){
        stk.push(i);
        str+="+\n";
        while(f_idx < n && stk.top() == arr[f_idx]){
            stk.pop();
            f_idx++;
            str+="-\n";
            if(stk.empty()) break;
        }
    }
    if(stk.empty()){
        return true;
    }
    return false;
}

int main(){
    int i, t;
    string str = "";
    cin >> t;
    int* arr = new int[t];
    for(i = 0; i < t; i++){
        cin >> arr[i];
    }
    if(simulate(arr, t, str)){
        cout << str;
    }
    else{
        cout << "NO" << endl;
    }
    delete[] arr;
    return 0;
}