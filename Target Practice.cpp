#include<bits/stdc++.h>
using namespace std;
#define int long long
 
signed main() {
    int t;
    cin>>t;
    while( t-- ){
        int n = 10;
        string s[n];
        
        for( int i = 0 ; i < n ; i++){
            cin >> s[i];
        }
        
        int ans = 0;
        
        for( int i =0 ;i < n ; i++){
            for( int j = 0 ; j < n ; j++ ){
                if( s[i][j] == 'X' and (i == 0 or i == 9 or j == 0 or j == 9) ) ans = ans + 1;
                else if( s[i][j] == 'X' and (i == 1 or i == 8 or j == 1 or j == 8) ) ans = ans + 2;
                else if( s[i][j] == 'X' and (i == 2 or i == 7 or j == 2 or j == 7) ) ans = ans + 3;
                else if( s[i][j] == 'X' and (i == 3 or i == 6 or j == 3 or j == 6) ) ans = ans + 4;
                else if( s[i][j] == 'X' and (i == 4 or i == 5 or j == 4 or j == 5) ) ans = ans + 5;
            }
        }
        
        cout << ans << endl;
        
    }
}
