#include<iostream>
using namespace std;

int main(){
    string s, t;
    cin >> s >> t;
    int len = s.length();
    int countt = 0;

    for(int i = 0; i < len; i++){
        if(s[len - 1 - i] == t[i]){
            countt++;
        }
    }

    if(countt == len){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

    return 0;
}
