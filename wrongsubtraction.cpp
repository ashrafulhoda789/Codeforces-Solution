#include<iostream>

using namespace std;

int main(){
    int num,k,r;
    cin >> num >> k;

    int n = num;

    while(k > 0){
        r = n%10;

        if(r!=0){
            n--;
        }
        else if(r == 0){
            n = n/10;
        }
        k--;
    }
    cout << n << endl;

}