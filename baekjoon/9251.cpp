#include<iostream>
#include<string>


using namespace std;

int maxi(int h, int v , int d){
    int max = h;
    if(max < v){
        max = v;
    }
    if(max < d){
        max = d;
    }
    return max;
}

int Subsequence(string s1, string s2){
    int i, j;
    int** dp = new int*[s1.size()];
    for(i = 0; i < s1.size(); i++){
        dp[i] = new int[s2.size()];
    }
    for(i = 0; i < s1.size(); i++){
        for(j = 0; j < s2.size(); j++){
            int hor = 0, ver = 0, dia = 0;
            if(j != 0){
                hor = dp[i][j-1];
            }
            if(i != 0){
                ver = dp[i-1][j];
            }
            if(i != 0 && j != 0){
                dia = dp[i-1][j-1];
            }
            if(s1[i] == s2[j]){
                dia++;
            }
            dp[i][j] = maxi(hor, ver, dia);
        }
    }
    return dp[i-1][j-1];
}
int main(){
    string str1, str2;
    cin >> str1;
    cin >> str2;
    cout << Subsequence(str1, str2);
    return 0;
}