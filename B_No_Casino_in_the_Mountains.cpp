#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;

    while(t--){
        int n,k;
        cin >> n >> k;

        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }

        int ans = 0,i=0;
        while(i <= n-k){
            bool ok = true;
            for(int j=0; j<k; j++){
                if(v[i+j] == 1){
                    ok = false;
                    break;
                }
            }

            if(ok){
                ans++;
                i += (k+1);
            }
            else{
                i++;
            }
        }

        cout << ans << "\n";
        
    }
      
    return 0;
}