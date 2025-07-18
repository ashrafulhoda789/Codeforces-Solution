#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int tmp = n,res = INT_MAX;
        while(tmp > 0){
            int r = tmp%10;
            tmp /= 10;

            res = min(res,r);
        }

        cout << res << "\n";
        
    }
      
    return 0;
}