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

        vector<int> v(n-2);
        for(int i=0; i<n-2; i++){
            cin >> v[i];
        }

        bool ok = true;
        for(int i=1; i<n-3; i++){
            if(v[i-1] == 1 && v[i] == 0 && v[i+1] == 1){
                ok = false;
                break;
            }
        }

        if(ok) cout << "YES\n";
        else cout << "NO\n";
        
    }
      
    return 0;
}