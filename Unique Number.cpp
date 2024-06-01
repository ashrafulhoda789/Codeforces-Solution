#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin >> t;
    
    while(t--){
        int x;
        cin >> x;

        if(x < 10){
            cout << x << endl;
            continue;
        }else if(x > 45){
            cout << -1 << endl;
        }else{
            int n = x;
            vector<int> v ;
            int bigDigit = 9;
            int sum = 0;
            while(n!=sum){
                if((n-sum)>bigDigit){
                    sum += bigDigit;
                    v.push_back(bigDigit);
                    bigDigit--; 
                }else{
                    v.push_back(n-sum);
                    sum = n;
                }
            }
            for(int j = v.size()-1; j>=0; j--){
                cout << v[j] << ""; 
            }
            cout << endl;
        
        
        }

        
    }
}