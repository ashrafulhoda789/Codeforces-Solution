#include<iostream>
using namespace std;

int main(){

    int x,s,r;
    cin >> x;

    if(x%5==0){
        s = x/5;
        cout << s << endl;
    }else{
        r = x/5;
        s = r + 1;
        cout << s << endl;
    }
}