#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool compare(vector<ll>& a, vector<ll>& b){
    return a[0] < b[0];
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;

    while(t--){
        int n;
        ll k;
        cin >> n >> k;

        vector<vector<ll>> v(n,vector<ll>(3));
        for(int i=0; i<n; i++){
            cin >> v[i][0] >> v[i][1] >> v[i][2];
        } 

        sort(v.begin(),v.end(),compare);

        priority_queue<ll> pq;
        int i=0;

        while(true){
            while(i < n && v[i][0] <= k){
                
                if(v[i][1] >= k) {
                    pq.push(v[i][2]);
                }
                i++;
            }

            if(pq.empty()) break;

            k = max(k,pq.top());
            pq.pop();
        }

        cout << k << "\n";
        
    }
      
    return 0;
}