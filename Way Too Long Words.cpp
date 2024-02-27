#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int t,countt=0;
    cin >> t;
    

    
    while(t--){
        string s;
        cin >> s;
        int len = s.length();
        if(len>10){
            for(int i=1; i<len-1; i++){
                countt++;
            }
            cout << s[0] << countt << s[len-1] <<endl;
        }
        else
        {
            cout << s <<endl;
        }
        countt=0;
    }

    
}