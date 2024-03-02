#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int t;
    cin >> t;
    while( t-- )
    {
        int n ;
        cin >> n;
        string s;
        cin >> s;
        int cnt = 0;
    
        for( int i=0 ;i<n ;i++){
            if( s[i]=='.') cnt++;
        }
        bool flag = false ;
        for( int i=0 ;i<= n-3 ; i++){
            if( s[i]=='.' and  s[i + 1]=='.'  and  s[i + 2]=='.'){
                flag = true;
            }
        }
        if( s == "...") cout <<2<< endl;
        //else if( s == "###") cout << 0 << endl;
        else if( flag ) cout << 2 << endl;
        else cout << cnt << endl;
    }
}
