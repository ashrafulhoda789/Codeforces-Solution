#include<iostream>

using namespace std;
int main(){
    long long num;
    cin >> num;

    int countt=0;

    long long n = num;

    while(n>0){
        int r = n % 10;

        if(r == 4 || r == 7){
            countt++;
        }
        
        n = n/10;
    }

    if(countt == 4 || countt == 7){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" <<endl;
    }

}