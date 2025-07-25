#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int n;
    cin >> n;

    map<int,int> d;
    for(int i=1; i<=n; i++){
        int l,r;
        cin >> l >> r;

        d[l] += 1;
        d[r+1] -= 1;
    }

    long long sum = 0;
    bool ok = true;
    for(auto i : d){
        int idx = i.first;
        int value = i.second;

        sum += value;

        if(sum > 2){
            ok = false;  
            break;
        }

    }

    if(ok){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
      
    return 0;
}