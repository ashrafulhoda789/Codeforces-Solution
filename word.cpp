#include<iostream>
#include<cstring>

using namespace std;
int main(){
    string s;
    cin >> s;

    int len = s.length();

    int upper = 0,lower = 0;
    string up_case,low_case,equal;

    for(int i=0; i<len; i++){
        if(s[i] >='A' && s[i] <= 'Z'){
            upper++;
        }
        if(s[i] >= 'a' && s[i] <= 'z'){
            lower++;
        }
    }

    for(int i=0; i<len; i++){
        if(upper > lower){
            up_case = toupper(s[i]);
            cout << up_case;
        }
        else if(lower > upper){
            low_case = tolower(s[i]);
            cout << low_case;
        }
        else if(lower == upper){
            equal = tolower(s[i]);
            cout << equal;
        }
    }
    cout << endl;
}